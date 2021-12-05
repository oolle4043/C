#include <Servo.h>
#include <NewPing.h>

Servo servo;

const int servoPin = 2; // 서보 모터 핀
const int MAX_DISTANCE = 100;

int RightMotor_E_pin = 5; // 오른쪽 모터의 Enable & PWM
int RightMotor_1_pin = 8; // 오른쪽 모터 제어선 IN1
int RightMotor_2_pin = 9; // 오른쪽 모터 제어선 IN2
int LeftMotor_3_pin = 10; // 왼쪽 모터 제어선 IN3
int LeftMotor_4_pin = 11; // 왼쪽 모터 제어선 IN4
int LeftMotor_E_pin = 6;  // 왼쪽 모터의 Enable & PWM

int trigPin = 13; //초음파 센서
int echoPin = 12; //초음파 센서

NewPing sonar(trigPin, echoPin, MAX_DISTANCE);

int PWM = 120; // 최소 120

void movePattern();
void Cleaner_Go();
void Cleaner_Back();
void Cleaner_Left();
void Cleaner_Right();
void Cleaner_Stop();

int state = 10;
int angle = 90;

int count = 0;

void setup() {
  
  servo.attach(2); //연결핀
  Serial.begin(9600);
  
  servo.write(angle);  // 각도
  delay(1000);

  Cleaner_Go();

  pinMode(RightMotor_E_pin, OUTPUT);        // 출력모드로 설정
  pinMode(RightMotor_1_pin, OUTPUT);
  pinMode(RightMotor_2_pin, OUTPUT);
  pinMode(LeftMotor_3_pin, OUTPUT);
  pinMode(LeftMotor_4_pin, OUTPUT);
  pinMode(LeftMotor_E_pin, OUTPUT);
  Serial.begin(9600);       // 시리얼 속도 설정
  pinMode(echoPin, INPUT);   // echoPin 입력
  pinMode(trigPin, OUTPUT);  // trigPin 출력
}

void loop() {
  servo.write(angle);  // 각도
  delay(50);

  int distance = sonar.ping_cm();   // 초음파 센서 거리 받는 변수
  Serial.println(distance);         // 값 출력

  if(distance > 0 && distance < 15){  // 장애물 거리 조건문
    if(count == 0){
      movePattern_Right();
      count++;
    }
    else if(count == 1){
      movePattern_Left();
      count--;
    }
  }

  if(angle == 140) state = -10; // 서보모터 각도 40~140 회전
  else if(angle == 40) state = 10;
  angle += state;
}

void movePattern_Right(){
  Cleaner_Stop();

  Cleaner_Back();
  delay(200);

  Cleaner_Right();
  Cleaner_Go();
  delay(600);
  Cleaner_Right();

  Cleaner_Go();
    
  angle = 90;
  servo.write(angle);
  delay(100);
}

void movePattern_Left(){
  Cleaner_Stop();

  Cleaner_Back();
  delay(200);

  Cleaner_Left();
  Cleaner_Go();
  delay(600);
  Cleaner_Left();

  Cleaner_Go();
    
  angle = 90;
  servo.write(angle);
  delay(100);
} 

void Cleaner_Go(){
  digitalWrite(RightMotor_1_pin, LOW);
  digitalWrite(RightMotor_2_pin, HIGH);
  digitalWrite(LeftMotor_3_pin, LOW);
  digitalWrite(LeftMotor_4_pin, HIGH);

  analogWrite(RightMotor_E_pin, PWM);     
  analogWrite(LeftMotor_E_pin, PWM);
 }
 
void Cleaner_Back(){       // 후진
  digitalWrite(RightMotor_1_pin, HIGH);
  digitalWrite(RightMotor_2_pin, LOW);
  digitalWrite(LeftMotor_3_pin, HIGH);
  digitalWrite(LeftMotor_4_pin, LOW);

  analogWrite(RightMotor_E_pin, PWM);     
  analogWrite(LeftMotor_E_pin, PWM);
}

void Cleaner_Left(){ // 좌회전
  digitalWrite(RightMotor_1_pin, LOW);
  digitalWrite(RightMotor_2_pin, HIGH);
  digitalWrite(LeftMotor_3_pin, HIGH);
  digitalWrite(LeftMotor_4_pin, LOW);

  analogWrite(RightMotor_E_pin, PWM+50);     
  analogWrite(LeftMotor_E_pin, PWM+50);
  delay(700);
}

void Cleaner_Right(){ // 우회전
  digitalWrite(RightMotor_1_pin, HIGH);
  digitalWrite(RightMotor_2_pin, LOW);
  digitalWrite(LeftMotor_3_pin, LOW);
  digitalWrite(LeftMotor_4_pin, HIGH);
  
  analogWrite(RightMotor_E_pin, PWM+50);     
  analogWrite(LeftMotor_E_pin, PWM+50);
  delay(700);
}

void Cleaner_Stop(){  // 정지
  digitalWrite(RightMotor_1_pin, LOW);
  digitalWrite(RightMotor_2_pin, LOW);
  digitalWrite(LeftMotor_3_pin, LOW);
  digitalWrite(LeftMotor_4_pin, LOW);
  delay(1000);
}
