
int RELE=2;

void setup() {
  pinMode(RELE,OUTPUT);

}

void loop() {
 digitalWrite (RELE,LOW); // RELE SE ACTIVA, NIVEL BAJO
 delay(5000); 
 digitalWrite(RELE,HIGH); //SE APAGA EL RELE, NIVEL ALTO
delay(5000);
}
