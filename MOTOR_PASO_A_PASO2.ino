int IN1=8;
 int IN2=9;
 int  IN3=10;
 int  IN4=11;
 int demora = 20; // no debe ser menor a 10ms 
 //paso completo simple
 int paso [4][4]=
 {
  (1,0,0,0),
  (0,1,0,0),
  (0,0,1,0),
  (0,0,0,1)
  
 };

void setup() {
 
  pinMode (IN1,OUTPUT);
  pinMode (IN2,OUTPUT);
  pinMode (IN3,OUTPUT);
  pinMode (IN4,OUTPUT);
}

void loop() {

for (int i = 0; i<512;i++)// 512*4=2048 {

for (int i=0;i<4;i++)
{
  digitalWrite (IN1,  paso [i][0]);
  digitalWrite (IN2,  paso [i][1]);
  digitalWrite (IN3,  paso [i][2]);
  digitalWrite (IN4,  paso [i][3]);
  delay (demora);

digitalWrite (IN1,LOW);
digitalWrite (IN2,LOW);
digitalWrite (IN3,LOW);
digitalWrite (IN4,LOW);
delay (5000);
}}
