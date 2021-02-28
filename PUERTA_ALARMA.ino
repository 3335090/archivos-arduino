int led=13;
int reedwitch= 5;
int buzzer=8;
int val=0;

void setup() {
 pinMode (led,OUTPUT);
 pinMode (reedwitch,INPUT);
 pinMode (buzzer,OUTPUT); 

}

void loop() {
val =digitalRead(reedwitch);

if(val==LOW){
  digitalWrite(led,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(200);
  digitalWrite(led,LOW);
  digitalWrite(buzzer,LOW);
   delay(200);}
  else{
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);
    Serial.println ("CAMPO DETECTADO");
  }
}
