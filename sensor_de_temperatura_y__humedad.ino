#include <Adafruit_Sensor.h>

#include <DHT.h>
#include <DHT_U.h>


int SENSOR = 2;
int HUMEDAD;
int TEMPERATURA;
 DHT dht(SENSOR, DHT11);

void setup() {
  
Serial.begin(9600);
dht.begin();
}
void loop() {
TEMPERATURA = dht.readTemperature();
HUMEDAD = dht.readHumidity();
Serial.print("Temperatura:");
Serial.print(TEMPERATURA);
Serial.print("Humedad:");
Serial.print(HUMEDAD);
delay(500);

}
