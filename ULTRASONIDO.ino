#include <NewPing.h>



int TRIG = 10;
int  ECO = 9;
int LED =3;
int DISTANCIA;
int DURACION;
void setup() {
  Serial.print (9600);
  pinMode (TRIG, OUTPUT);
  pinMode (ECO, INPUT);
  pinMode (LED, OUTPUT);
}

void loop() {
 digitalWrite (TRIG,HIGH);
 delay (10);
 digitalWrite(TRIG,LOW);
 DURACION = pulseIn (ECO,HIGH);
 DISTANCIA = DURACION/58.2 ;
 Serial.println(DISTANCIA);
 delay(200);
 if (DISTANCIA <=20 && DISTANCIA >= 0) {
  digitalWrite(LED,HIGH);
  delay (DISTANCIA * 10); 
  digitalWrite(LED,LOW); 
  
 }
}
