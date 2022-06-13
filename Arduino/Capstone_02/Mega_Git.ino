#include <Arduino_JSON.h>
#include <ThreeWire.h>
#include <RtcDS1302.h>
#include <Wire.h>
#include <DHT.h>

#define DHTTYPE DHT22
#define DHTPIN 2

int Relaypin1 = 7; // 쿨링팬 pin
int Relaypin2 = 6; //
int Relaypin3 = 5; // 생장등 LED pin
int Relaypin4 = 4; // 워터펌프

bool sensorFlag = true;
bool camFlag = true;

int d1_t;
int d1_Soil_moisture;
int d1_illuminance;

ThreeWire myWire(15, 16, 14); // DAT, CLK, RST

RtcDS1302<ThreeWire> Rtc(myWire);
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(57600);

  uint8_t vid, pid;
  uint8_t temp;
  Wire.begin();

  delay(1000);

  pinMode(Relaypin1, OUTPUT);
  pinMode(Relaypin3, OUTPUT);
  pinMode(Relaypin4, OUTPUT);

  digitalWrite(Relaypin1, HIGH);
  digitalWrite(Relaypin3, HIGH);
  digitalWrite(Relaypin4, HIGH);

  Serial.print("compiled: ");
  Serial.print(__DATE__);
  Serial.println(__TIME__);

  Rtc.Begin();

  RtcDateTime compiled = RtcDateTime(__DATE__, __TIME__);
  printDateTime(compiled);
  Serial.println();


  if (Rtc.GetIsWriteProtected())
  {
    Serial.println("RTC was write protected, enabling writing now");
    Rtc.SetIsWriteProtected(false);
  }
  if (!Rtc.GetIsRunning())
  {
    Serial.println("RTC was not actively running, starting now");
    Rtc.SetIsRunning(true);
  }

  RtcDateTime now = Rtc.GetDateTime();

  if (now < compiled)
  {
    Serial.println("RTC is older than compile time!  (Updating DateTime)");
    Rtc.SetDateTime(compiled);
  }

  else if (now > compiled)
  {
    Serial.println("RTC is newer than compile time. (this is expected)");
  }
  else if (now == compiled)
  {
    Serial.println("RTC is the same as compile time! (not expected but all is fine)");
  }
}
#define countof(a) (sizeof(a) / sizeof(a[0]))

void loop() {
  RtcDateTime now = Rtc.GetDateTime();
  int h = dht.readHumidity();
  int t = dht.readTemperature();
  int Soil_moisture = analogRead(A1);
  int illuminance = analogRead(A0);

  if (Serial.available()) {
    String D_data = Serial.readStringUntil(0x0a);
    Serial.print(D_data);
    JSONVar D1_sensor_Object = JSON.parse(D_data);
    JSONVar keys = D1_sensor_Object.keys();


    String D1_seneor_Arr[3];

    for (int i = 0; i < keys.length(); i++) {
      JSONVar value = D1_sensor_Object[keys[i]];
      //      Serial.print(keys[i]);
      //      Serial.print(" = ");
      //      Serial.println(value);
      D1_seneor_Arr[i] = JSON.stringify(value);
    }
    String token = D1_seneor_Arr[0].substring(1, D1_seneor_Arr[0].length() - 1);

    if (token.toInt()) {
      d1_t = token.toInt();
    }
    if (D1_seneor_Arr[1].toInt()) {
      d1_Soil_moisture = D1_seneor_Arr[1].toInt();
    }
    if (D1_seneor_Arr[2].toInt()) {
      d1_illuminance = D1_seneor_Arr[2].toInt();
    }
  }

  //Serial.println(d1_t);

  if (illuminance > d1_illuminance) {
    digitalWrite(Relaypin3, LOW);
    delay(1000);
  }
  else {
    digitalWrite(Relaypin3, HIGH);
    delay(1000);
  }
  if (t > d1_t) { // 온도에 따라 쿨러 온오프
    digitalWrite(Relaypin1, LOW);
    delay(1000);
  }
  else {
    digitalWrite(Relaypin1, HIGH);
    delay(1000);
  }

  if (Soil_moisture > d1_Soil_moisture) {
    digitalWrite(Relaypin4, LOW);
    delay(1000);
    digitalWrite(Relaypin4, HIGH);
    delay(1000);
  }

  char hourH[3];
  char minuteM[3];

  snprintf_P(hourH,
             countof(hourH),
             PSTR("%02u"),
             now.Hour());
  Serial.println(hourH);

  snprintf_P(minuteM,
             countof(minuteM),
             PSTR("%02u"),
             now.Minute());
  Serial.println(minuteM);

  if (!strcmp(minuteM, "00") && sensorFlag) {
    String strH = (String)h;
    String strT = (String)t;
    String strS = (String)Soil_moisture;
    String strI = (String)illuminance;

    String sendJson = "{\"humidity\":\"" + strH + "\", \"temp\": \"" + strT + "\", \"humidity_soil\": \"" + strS + "\",\"illuminance\": \"" + strI + "\"}";
    Serial.println(sendJson);
    delay(55000);
  }
  else {
    sensorFlag = true;
  }
  sensorFlag = false;
}

void printDateTime(const RtcDateTime & dt)
{
  char dayD[4];
  char hourH[4];

  snprintf_P(dayD,
             countof(dayD),
             PSTR("%02u"),
             dt.Day());

  snprintf_P(hourH,
             countof(hourH),
             PSTR("%02u"),
             dt.Hour());
}
