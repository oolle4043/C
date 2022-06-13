#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <WiFiClient.h>
#include <Arduino_JSON.h>
#include <SoftwareSerial.h>
#include <ArduinoJson.h>

SoftwareSerial mega(D5, D6);
JSONVar sensorReadingsArr[4];
JSONVar loginArr[3];
JSONVar resultArr[2];

int cnt = 0; // while count
const char* ssid = "와이파이 이름";
const char* password = "와이파이 비밀번호";
const char* serverName = "http://주소/api/arduino/serial";
const char* login = "http://주소/api/arduino/login";
unsigned long lastTime = 0;
unsigned long timerDelay = 5000;
String sensorReadings;

bool loginFlag = true;
bool deviceFlag = true;
bool sensorFlag = true;


void setup() {
  Serial.begin(57600);
  mega.begin(57600);

  WiFi.begin(ssid, password);
  Serial.println("Connecting");
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to WiFi network with IP Address: ");
  Serial.println(WiFi.localIP());

  Serial.println("Timer set to 5 seconds (timerDelay variable), it will take 5 seconds before publishing the first reading.");
}

void loop() {
  int httpResponseCode = 0;
  int loginResponseCode = 0;
  int sensorResponseCode = 0;
  String sendMinData;

  while (loginFlag) {
    WiFiClient loginClient;
    HTTPClient loginHttp;

    loginHttp.begin(loginClient, login);

    loginHttp.addHeader("Content-Type", "application/json");
    loginHttp.addHeader("Accept", "application/json");

    loginResponseCode = loginHttp.POST("{\"email\":\"arduinofree@arduino.com\",\"password\":\"arduinopassword\"}");

    String loginPayload = "{}";

    if (loginResponseCode > 0) {
      Serial.print("HTTP Response code: ");
      Serial.println(loginResponseCode);
      loginPayload = loginHttp.getString();
      delay(1000);
    }
    else {
      Serial.print("Error code: ");
      Serial.println(loginResponseCode);
      delay(1000);
    }
    loginHttp.end();

    JSONVar loginJson = JSON.parse(loginPayload);

    JSONVar loginKeys = loginJson.keys();

    for (int i = 0; i < loginKeys.length(); i++) {
      JSONVar value = loginJson[loginKeys[i]];
      Serial.print(loginKeys[i]);
      Serial.print(" = ");
      Serial.println(value);
      loginArr[i] = value;
    }

    Serial.print("login_access_token = ");
    Serial.println(loginArr[0]);
    Serial.print("login_token_type = ");
    Serial.println(loginArr[1]);
    Serial.print("login_expires_in = ");
    Serial.println(loginArr[2]);

    if (loginResponseCode == 200) {
      loginFlag = false;
    }
  }
  while (deviceFlag) {
    while (cnt < 5) {
      if ((millis() - lastTime) > timerDelay) {
        if (WiFi.status() == WL_CONNECTED) {

          WiFiClient client;
          HTTPClient http;

          http.begin(client, serverName);

          http.addHeader("Content-Type", "application/json");
          http.addHeader("Accept", "application/json");

          httpResponseCode = http.POST("{\"serial_no\":\"L4xyRa5d3GwTxbtNDJBQ\"}");

          String payload = "{}";

          if (httpResponseCode > 0) {
            Serial.print("HTTP Response code: ");
            Serial.println(httpResponseCode);
            payload = http.getString();
            delay(1000);
          }
          else {
            Serial.print("Error code: ");
            Serial.println(httpResponseCode);
            delay(1000);
          }
          http.end();

          sensorReadings = payload;

          Serial.println(sensorReadings);
          JSONVar myObject = JSON.parse(sensorReadings);

          if (JSON.typeof(myObject) == "undefined") {
            Serial.println("Parsing input failed!");
            return;
          }

          Serial.print("JSON object = ");
          Serial.println(myObject);

          JSONVar keys = myObject.keys();

          for (int i = 0; i < keys.length(); i++) {
            JSONVar value = myObject[keys[i]];
            Serial.print(keys[i]);
            Serial.print(" = ");
            Serial.println(value);
            sensorReadingsArr[i] = value;
          }
          Serial.print("1 = ");
          Serial.println(sensorReadingsArr[0]); // success
          Serial.print("2 = ");
          Serial.println(sensorReadingsArr[1]); // userID
          Serial.print("3 = ");
          Serial.println(sensorReadingsArr[2]); // plantID
          Serial.print("4 = ");
          Serial.println(sensorReadingsArr[3]); // seonsor

          JSONVar myObject2 = sensorReadingsArr[3];
          JSONVar keys2 = myObject2.keys();

          for (int i = 0; i < keys2.length(); i++) {
            JSONVar value = myObject2[keys2[i]];
            Serial.print(keys2[i]);
            Serial.print(" = ");
            Serial.println(value);
            resultArr[i] = value;
          }

          Serial.print("result1 = ");
          Mega.write(0);
          Serial.println(resultArr[0]); // min
          Serial.print("result2 = ");
          Serial.println(resultArr[1]); // max

          JSONVar minJson = resultArr[0];

          JSONVar minKeys = minJson.keys();

          JSONVar minArr[3];

          for (int i = 0; i < minKeys.length(); i++) {
            JSONVar value = minJson[minKeys[i]];
            Serial.print(minKeys[i]);
            Serial.print(" = ");
            Serial.println(value);
            minArr[i] = value;
          }

          Serial.print("min_temp = ");
          Serial.println(minArr[0]);
          Serial.print("min_water = ");
          Serial.println(minArr[1]);
          Serial.print("min_illuminance = ");
          Serial.println(minArr[2]);

          sendMinData = JSON.stringify(minJson);
          mega.println(sendMinData);
          delay(1000);

          JSONVar maxJson = resultArr[1];
          JSONVar maxKeys = maxJson.keys();

          JSONVar maxArr[3];

          for (int i = 0; i < maxKeys.length(); i++) {
            JSONVar value = maxJson[maxKeys[i]];
            Serial.print(maxKeys[i]);
            Serial.print(" = ");
            Serial.println(value);
            maxArr[i] = value;
          }

          Serial.print("max_temp = ");
          Serial.println(maxArr[0]);
          Serial.print("max_water = ");
          Serial.println(maxArr[1]);
          Serial.print("max_illuminance = ");
          Serial.println(maxArr[2]);
        }
        else {
          Serial.println("WiFi Disconnected");
        }
        lastTime = millis();
      }
      if (httpResponseCode == 201) {
        deviceFlag = false;
        break;
      }
      cnt++;

      if (cnt >= 5) {
        deviceFlag = false;
      }
      String sendJson = "{\"humidity\":\"" + strH + "\", \"temp\": \"" + strT + "\", \"humidity_soil\": \"" + strS + "\",\"illuminance\": \"1\"}";
      Serial.println(sendJson);
    }
  }
  if (mega.available()) {
    String mdata = mega.readStringUntil(0x0a);
    Serial.println(mdata);
    mega.println(sendMinData);

    JSONVar sensorResultOfJson = JSON.parse(mdata);
    JSONVar sensorResultOfKeys = sensorResultOfJson.keys();

    JSONVar sensorResultOfArr[4];

    for (int i = 0; i < sensorResultOfKeys.length(); i++) {
      JSONVar value = sensorResultOfJson[sensorResultOfKeys[i]];
      Serial.print(sensorResultOfKeys[i]);
      Serial.print(" = ");
      Serial.println(value);
      sensorResultOfArr[i] = value;
    }

    Serial.print("sensor_humidity = ");
    Serial.println(sensorResultOfArr[0]);
    Serial.print("sensor_temp = ");
    Serial.println(sensorResultOfArr[1]);
    Serial.print("sensor_humidity_soil = ");
    Serial.println(sensorResultOfArr[2]);
    Serial.print("sensor_illuminance = ");
    Serial.println(sensorResultOfArr[3]);

    String sensor = "http://주소/api/User/JSON.stringify(sensorReadingsArr[1])/arduino/input";

    WiFiClient sensorClient;
    HTTPClient sensorHttp;
    sensorHttp.begin(sensorClient, sensor);

    sensorHttp.addHeader("Content-Type", "application/json");
    sensorHttp.addHeader("Accept", "application/json");
    //JSON.stringify(loginArr[0])
    String sendStr = "{\"token\":" + JSON.stringify(loginArr[0]) + ",\"plantID\":" + JSON.stringify(sensorReadingsArr[2]) + ",\"humidity\":" + JSON.stringify(sensorResultOfArr[0]) + ",\"temp\":" + JSON.stringify(sensorResultOfArr[1]) + ",\"humidity_soil\":" + JSON.stringify(sensorResultOfArr[2]) + ",\"illuminance\":" + JSON.stringify(sensorResultOfArr[3]) + "}";
    Serial.println(sendStr);
    sensorResponseCode = sensorHttp.POST(sendStr);
    String sensorPayload = "{}";

    if (sensorResponseCode > 0) {
      Serial.print("HTTP Response code: ");
      Serial.println(sensorResponseCode);
      sensorPayload = sensorHttp.getString();
      delay(1000);
    }
    else {
      Serial.print("Error code: ");
      Serial.println(sensorResponseCode);
      delay(1000);
    }
    sensorHttp.end();

    Serial.println(sensorPayload);
    JSONVar sensorJson = JSON.parse(sensorPayload);
    JSONVar sensorKeys = sensorJson.keys();

    JSONVar sensorArr[2];

    for (int i = 0; i < sensorKeys.length(); i++) {
      JSONVar value = sensorJson[sensorKeys[i]];
      Serial.print(sensorKeys[i]);
      Serial.print(" = ");
      Serial.println(value);
      sensorArr[i] = value;
    }
  }
  //  }
}
