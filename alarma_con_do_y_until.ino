int sensorPin = A1;
int sensorValue = 0;
int piezoPin = 9;
int LED = 7;
int pulsador = 3;
int estado = 0;
int estadoAnterior =0;
int salida=0;
int laser=5;
void setup() {
 Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(LED,OUTPUT);
  pinMode(piezoPin, OUTPUT);
  pinMode(3,INPUT);
  pinMode (5,OUTPUT);
  digitalWrite(5,HIGH);}
void loop() {
  estado=digitalRead(3);
  Serial.print(sensorValue);
   if ((estado == HIGH)&& (estadoAnterior==LOW));{
    salida = 1 - salida;
    delay(1000);}
   if (estado==HIGH) {
    salida=1-salida;
   digitalWrite(piezoPin,LOW);
  digitalWrite(LED,LOW);
   digitalWrite(5,HIGH);}
  
  else {
   do{ sensorValue = analogRead(sensorPin);}
  while  (sensorValue>800);{
   digitalWrite(piezoPin, HIGH);
   digitalWrite(5,LOW);
    tone(9, 3047, 400);
      delay(1000);
      noTone(8);
      delay(100);
     digitalWrite(LED,HIGH);
     delay(1000);
     digitalWrite(LED,LOW);
     delay(1000); }  }}
      
 
