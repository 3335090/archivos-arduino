int SENSOR;
int buzzer=7;
void setup() {
 Serial.begin(9600);
pinMode (buzzer,OUTPUT);
}

void loop() {
 SENSOR=analogRead (A1);
 if (SENSOR<2000 || SENSOR >3000){
 Serial.println ("CAMPO DETECTADO");
 digitalWrite (buzzer,LOW);}
 else (SENSOR>100000);
 Serial.println ("no campo");
  digitalWrite (buzzer,HIGH);
}
