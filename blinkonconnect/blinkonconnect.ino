#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>


#define PIN            16



const char* ssid = "ssid";
const char* password = "password";

void setup () {
  
  pinMode(PIN, OUTPUT);   
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    digitalWrite(PIN, HIGH);
    delay(1000);
     digitalWrite(PIN, LOW);
    delay(1000);
    Serial.print("Connecting..");

  }

}

void loop() {

  if (WiFi.status() == WL_CONNECTED) { 
     digitalWrite(PIN, HIGH);
    delay(1000);
    Serial.print("Connected..");
  }

}
