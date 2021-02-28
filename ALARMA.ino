
#define trig 7 
#define eco 6
#define buzzer 13
int numTones = 10 ; 
int tones [ ]= { 261,294,311,349, 370,392,415,440,466,494};

void setup() {
pinMode (trig,OUTPUT);
pinMode (eco, INPUT);
pinMode (buzzer, OUTPUT);
Serial.begin(9600); 
}

void loop() {
  
long duration, distance ;
digitalWrite (trig, HIGH); 
delay (2);
digitalWrite(trig, LOW);

duration = pulseIn (eco, HIGH);
distance = (duration/58.2 ); 
Serial.println(distance);
delay (200); 
if (distance <= 150 && distance >=0){
 tone (buzzer, tones[350 - distance]); 
  delay(distance*10); }
  else {
    noTone (buzzer); }
    if ( distance = 10) { 
      tone (buzzer, tone [400]); 
      delay (300);} 
      else { 
        noTone(buzzer); 




}}
