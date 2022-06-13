void setup() {
  Serial.begin(57600);
}

void loop() {
  int readValue = analogRead(A0);
  Serial.println(readValue);
  delay(1000);
}
