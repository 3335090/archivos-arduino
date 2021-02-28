
#include <ESP8266WiFi.h>

const char* ssid = "MaciasTLA";
const char* password = "WifiDeFamiliaMacias0371";




void setup() {
 Serial.begin(115200);
 WiFi.begin(ssid, password);
 while (WiFi.status () !=WL_CONNECTED) {
  delay (300);
  Serial.print (".´");
 }
 Serial.println("");  
 }



void loop() {
  // put your main code here, to run repeatedly:

}
