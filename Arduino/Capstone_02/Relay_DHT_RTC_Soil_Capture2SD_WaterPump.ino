#include <DHT.h>
#include <ThreeWire.h>
#include <RtcDS1302.h>
#include <ArduCAM.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include "memorysaver.h"
#define DHTPIN 2
#define DHTTYPE DHT22

#if !(defined OV5642_MINI_5MP || defined OV5642_MINI_5MP_BIT_ROTATION_FIXED || defined OV2640_MINI_2MP || defined OV3640_MINI_3MP)
#error Please select the hardware platform and camera module in the ../libraries/ArduCAM/memorysaver.h file
#endif
#define SD_CS 53
const int SPI_CS = 8;
#if defined (OV2640_MINI_2MP)
ArduCAM myCAM( OV2640, SPI_CS );
#elif defined (OV3640_MINI_3MP)
ArduCAM myCAM( OV3640, SPI_CS );
#else
ArduCAM myCAM( OV5642, SPI_CS );
#endif

void myCAMSaveToSDFile() {
  char str[8];
  byte buf[256];
  static int i = 0;
  static int k = 0;
  uint8_t temp = 0, temp_last = 0;
  uint32_t length = 0;
  bool is_header = false;
  File outFile;
  myCAM.flush_fifo();
  myCAM.clear_fifo_flag();
  myCAM.start_capture();
  Serial.println(F("캡쳐 시작"));
  while (!myCAM.get_bit(ARDUCHIP_TRIG , CAP_DONE_MASK));
  Serial.println(F("캡쳐 완료."));
  length = myCAM.read_fifo_length();
  Serial.print(F("fifo 길이:"));
  Serial.println(length, DEC);
  if (length >= MAX_FIFO_SIZE) //384K
  {
    Serial.println(F("Over size."));
    return ;
  }
  if (length == 0 ) //0 kb
  {
    Serial.println(F("Size is 0."));
    return ;
  }
  k = k + 1;
  itoa(k, str, 10);
  strcat(str, ".jpg");
  //Open the new file
  outFile = SD.open(str, O_WRITE | O_CREAT | O_TRUNC);
  if (!outFile) {
    Serial.println(F("File open faild"));
    return;
  }
  myCAM.CS_LOW();
  myCAM.set_fifo_burst();
  while ( length-- )
  {
    temp_last = temp;
    temp =  SPI.transfer(0x00);
    //Read JPEG data from FIFO
    if ( (temp == 0xD9) && (temp_last == 0xFF) ) //If find the end ,break while,
    {
      buf[i++] = temp;  //save the last  0XD9
      //Write the remain bytes in the buffer
      myCAM.CS_HIGH();
      outFile.write(buf, i);
      //Close the file
      outFile.close();
      Serial.println(F("이미지 저장완료."));
      is_header = false;
      i = 0;
    }
    if (is_header == true)
    {
      //Write image data to buffer if not full
      if (i < 256)
        buf[i++] = temp;
      else
      {
        //Write 256 bytes image data to file
        myCAM.CS_HIGH();
        outFile.write(buf, 256);
        i = 0;
        buf[i++] = temp;
        myCAM.CS_LOW();
        myCAM.set_fifo_burst();
      }
    }
    else if ((temp == 0xD8) & (temp_last == 0xFF))
    {
      is_header = true;
      buf[i++] = temp_last;
      buf[i++] = temp;
    }
  }
}

ThreeWire myWire(15, 16, 14); // DAT, CLK, RST
RtcDS1302<ThreeWire> Rtc(myWire);

int Relaypin1 = 7;
int Relaypin2 = 6;
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  uint8_t vid, pid;
  uint8_t temp;
  Wire.begin();
  Serial.begin(115200);

  Serial.println(F("ArduCAM Start!"));
  //set the CS as an output:
  pinMode(SPI_CS, OUTPUT);
  digitalWrite(SPI_CS, HIGH);
  // initialize SPI:
  SPI.begin();

  //Reset the CPLD
  myCAM.write_reg(0x07, 0x80);
  delay(100);
  myCAM.write_reg(0x07, 0x00);
  delay(100);

  while (1) {
    //Check if the ArduCAM SPI bus is OK
    myCAM.write_reg(ARDUCHIP_TEST1, 0x55);
    temp = myCAM.read_reg(ARDUCHIP_TEST1);

    if (temp != 0x55) {
      Serial.println(F("SPI interface Error!"));
      delay(1000); continue;
    } else {
      Serial.println(F("SPI interface OK.")); break;
    }
  }
  //Initialize SD Card
  while (!SD.begin(SD_CS)) {
    Serial.println(F("SD Card Error!")); delay(1000);
  }
  Serial.println(F("SD Card detected."));

#if defined (OV2640_MINI_2MP)
  while (1) {
    //Check if the camera module type is OV2640
    myCAM.wrSensorReg8_8(0xff, 0x01);
    myCAM.rdSensorReg8_8(OV2640_CHIPID_HIGH, &vid);
    myCAM.rdSensorReg8_8(OV2640_CHIPID_LOW, &pid);
    if ((vid != 0x26 ) && (( pid != 0x41 ) || ( pid != 0x42 ))) {
      Serial.println(F("Can't find OV2640 module!"));
      delay(1000); continue;
    }
    else {
      Serial.println(F("OV2640 detected.")); break;
    }
  }
#elif defined (OV3640_MINI_3MP)
  while (1) {
    //Check if the camera module type is OV3640
    myCAM.rdSensorReg16_8(OV3640_CHIPID_HIGH, &vid);
    myCAM.rdSensorReg16_8(OV3640_CHIPID_LOW, &pid);
    if ((vid != 0x36) || (pid != 0x4C)) {
      Serial.println(F("Can't find OV3640 module!"));
      delay(1000); continue;
    } else {
      Serial.println(F("OV3640 detected.")); break;
    }
  }
#else
  while (1) {
    //Check if the camera module type is OV5642
    myCAM.wrSensorReg16_8(0xff, 0x01);
    myCAM.rdSensorReg16_8(OV5642_CHIPID_HIGH, &vid);
    myCAM.rdSensorReg16_8(OV5642_CHIPID_LOW, &pid);
    if ((vid != 0x56) || (pid != 0x42)) {
      Serial.println(F("Can't find OV5642 module!"));
      delay(1000); continue;
    }
    else {
      Serial.println(F("OV5642 detected.")); break;
    }
  }
#endif
  myCAM.set_format(JPEG);
  myCAM.InitCAM();
#if defined (OV2640_MINI_2MP)
  myCAM.OV2640_set_JPEG_size(OV2640_320x240);
#elif defined (OV3640_MINI_3MP)
  myCAM.OV3640_set_JPEG_size(OV3640_320x240);
#else
  myCAM.write_reg(ARDUCHIP_TIM, VSYNC_LEVEL_MASK);   //VSYNC is active HIGH
  myCAM.OV5642_set_JPEG_size(OV5642_320x240);
#endif
  delay(1000);

  Serial.begin(57600);
  pinMode(Relaypin1, OUTPUT);
  pinMode(Relaypin2, OUTPUT);

  //컴파일 시점의 날짜(__DATE__)와 시간(__TIME__)을 시리얼모니터에 표시
  Serial.print("compiled: ");
  Serial.print(__DATE__);
  Serial.println(__TIME__);

  //RTC 모듈 라이브러리 시작
  Rtc.Begin();

  //RTCDateTime 클래스 생성(컴파일된 시간으로 설정)
  RtcDateTime compiled = RtcDateTime(__DATE__, __TIME__);
  printDateTime(compiled);
  Serial.println();

  //RTC모듈에 쓰기 금지 모드인지 확인
  if (Rtc.GetIsWriteProtected())
  {
    Serial.println("RTC was write protected, enabling writing now");
    //쓰기 금지 모드이면 해제
    Rtc.SetIsWriteProtected(false);
  }
  //RTC 모듈이 동작중이 아니라면
  if (!Rtc.GetIsRunning())
  {
    Serial.println("RTC was not actively running, starting now");
    //시작
    Rtc.SetIsRunning(true);
  }

  // RTC 모듈의 현재 시간 얻기
  RtcDateTime now = Rtc.GetDateTime();

  //RTC 모듈하고 위에 만든 RTC클래스(컴파일된 시간을 가지고 있는)와 비교해서
  //RTC 시간이 더 늦다면..
  if (now < compiled)
  {
    //RTC가 컴파일 시간보다 느려!(시간을 갱신한다.)
    Serial.println("RTC is older than compile time!  (Updating DateTime)");
    //컴파일 시간을 RTC 모듈에 적용
    Rtc.SetDateTime(compiled);
  }

  //RTC 모듈이 컴파일한 시간보다 빠르다면
  else if (now > compiled)
  {
    //RTC가 캄파일 시간보다 더 새것이다(그치 이래야지!!!)
    Serial.println("RTC is newer than compile time. (this is expected)");
  }

  //RTC와 컴파일한 시간이 같다면.
  else if (now == compiled)
  {
    //RTC와 컴파일 시간이 같다.
    Serial.println("RTC is the same as compile time! (not expected but all is fine)");
  }
}

void loop() {
  digitalWrite(Relaypin2, HIGH);
  RtcDateTime now = Rtc.GetDateTime();

  Serial.print("현재 시간은: ");
  printDateTime(now);
  Serial.println(" 입니다.");

  int h = dht.readHumidity();
  int t = dht.readTemperature();
  Serial.print("습도: ");
  Serial.println(h);
  Serial.print("온도: ");
  Serial.println(t);
  delay(300);

  if (t > 26) {
    Serial.println("온도 27도 이상이 되어 쿨링팬을 가동합니다.");
    digitalWrite(Relaypin1, LOW);
  }
  else {
    digitalWrite(Relaypin1, HIGH);
  }
  int Soil_moisture = analogRead(A1);
  Serial.print("토양습도: ");
  Serial.println(Soil_moisture);
  delay(1500);

  if (Soil_moisture > 800) {
    Serial.println("토양이 건조합니다. 워터펌프를 가동합니다.");
    digitalWrite(Relaypin2, LOW);
    delay(2000);
    digitalWrite(Relaypin2, HIGH);
    delay(2000);
  }

  myCAMSaveToSDFile();
  Serial.println();
}

#define countof(a) (sizeof(a) / sizeof(a[0]))

void printDateTime(const RtcDateTime& dt)
{
  char datestring[20];

  snprintf_P(datestring,
             countof(datestring),
             PSTR("%02u/%02u/%04u %02u:%02u:%02u"),
             dt.Month(),
             dt.Day(),
             dt.Year(),
             dt.Hour(),
             dt.Minute(),
             dt.Second() );
  Serial.print(datestring);
}
