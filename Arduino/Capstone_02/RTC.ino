#include <ThreeWire.h>  
#include <RtcDS1302.h>

ThreeWire myWire(15,16,14); // DAT, CLK, RST
RtcDS1302<ThreeWire> Rtc(myWire);

void setup() {
  Serial.begin(57600);

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
  //RTC 모듈의 현재 시간 얻기
  RtcDateTime now = Rtc.GetDateTime();
  
  //시리얼 모니터에 출력
  printDateTime(now);
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
