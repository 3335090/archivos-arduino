

#include <ESP8266WiFi.h>

#include <ESP8266WiFiMulti.h>

#include <WiFiClient.h>
#include <WiFiClientSecure.h>

#include <WiFiServer.h>
#include <WiFiServerSecure.h>

#include <WiFiUdp.h>


void setup() {
  pinMode(2, OUTPUT);
}
void loop() {
digitalWrite(2, HIGH);
delay(1000);
digitalWrite(2, LOW);
delay(1000);
}
