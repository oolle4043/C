#include <Wire.h>                        // i2C 통신을 위한 라이브러리
#include <LiquidCrystal_I2C.h> 
#include "Air_Quality_Sensor.h"

int Warning = 9;
int Sol = 392;

LiquidCrystal_I2C lcd(0x27,16,2);

AirQualitySensor sensor(A0);

void setup(void) {
  pinMode(Warning,OUTPUT);
  lcd.init(); // LCD 초기화
  // Print a message to the LCD.
  lcd.backlight();                // 백라이트 켜기
  
    Serial.begin(9600);
    while (!Serial);

    Serial.println("Waiting sensor to init...");
    delay(1000); //20000

    if (sensor.init()) {
        Serial.println("Sensor ready.");
    } else {
        Serial.println("Sensor ERROR!");
    }
}
void loop(void) {
    int quality = sensor.slope();

    if (quality == AirQualitySensor::FORCE_SIGNAL) {
        lcd.setCursor(0,0);             // 1번째, 1라인
        lcd.print(sensor.getValue()); // 오염도 값 출력
        lcd.setCursor(0,1); // 1번째, 2라인
        lcd.print("High pollution! Force signal active.");  // 오염도 상태 측정
        tone(Warning, Sol, 250);  // 피에조 솔
        delay(250);
    } else if (quality == AirQualitySensor::HIGH_POLLUTION) {
        lcd.setCursor(0,0);             // 1번째, 1라인
        lcd.print(sensor.getValue()); // 오염도 값 출력
        lcd.setCursor(0,1);  // 1번째, 2라인
        lcd.print("High pollution!"); // 오염도 상태 측정
        tone(Warning, Sol, 250);  // 피에조 솔
        delay(250);
    } else if (quality == AirQualitySensor::LOW_POLLUTION) {
        lcd.setCursor(0,0);             // 1번째, 1라인
        lcd.print(sensor.getValue()); // 오염도 값 출력
        lcd.setCursor(0,1);  // 1번째, 2라인
        lcd.print("Low pollution!");  // 오염도 상태 측정
    } else if (quality == AirQualitySensor::FRESH_AIR) {
        lcd.setCursor(0,0);             // 1번째, 1라인
        lcd.print(sensor.getValue()); // 오염도 값 출력
        lcd.setCursor(0,1);  // 1번째, 2라인
        lcd.print("Fresh air.");  // 오염도 상태 측정
    }
    delay(1000);
}
