int pulsador = 8;
int LED=4;
int estado = 0 ; 

void setup() {
  pinMode(8 ,INPUT);
  pinMode( 4 ,OUTPUT);

}

void loop() {
  estado=digitalRead(8);
  if (estado == HIGH);{
    digitalWrite(LED,HIGH}
    else {
      digitalWrite (LED,LOW);}
    }
 
}
