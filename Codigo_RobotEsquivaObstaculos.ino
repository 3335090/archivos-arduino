#include <ArduinoRobotMotorBoard.h>
#include <EasyTransfer2.h>
#include <LineFollow.h>
#include <Multiplexer.h>

#include <Servo.h> 

Servo servo1;
Servo servo2;


int t1 = 10;
int e1 = 9;
int t2 = 3;
int e2 = 2;
//const int t3 = A5;  Futuro tercer sensor ultrasonico
//const int e3 = A4;  Futuro tercer sensor ultrasonico

int IN1 = 12;
int IN2 = 13;
int ENA = 11;
int IN3 = 4;
int IN4 = 5;
int ENB = 6;
 int aux;
  int ultra1;
  int ultra2;
  int cont = 0;

  
void setup() 
{
  servo1.attach(7);
  servo2.attach(8);

  pinMode(t1,OUTPUT);
  pinMode(e1,INPUT);
  pinMode(t2,OUTPUT);
  pinMode(e2,INPUT);
  //pinMode(t3,OUTPUT);
  //pinMode(e3,INPUT);

 

  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  pinMode(ENB,OUTPUT);
} 
 
void loop() 
{ 
 

  servo1.write(90);
  servo2.write(70);   // servo que no se utiliza del pan tilt

  ultra1 = (t1,e1);  //Activamos Ultrasonico 1
  delay(20);
  ultra2 = (t2,e2);  //Activamos Ultrasonico 2
  delay(20);
 
} 

int ultra(int Trig, int Echo)     //Funcion para controlar Ultrasonicos
{
  long duracion;
  long distancia;
  
  digitalWrite(Trig,LOW);
  delayMicroseconds(2);
  digitalWrite(Trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig,LOW);
  
  duracion = pulseIn(Echo,HIGH);
  distancia = (duracion/2)/29;
  
  return distancia;
}

void motor(int dir,int m1,int m2)   //Funcion para controlar los motores
{
  if(dir==1)
  {
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
  }
  else if(dir==-1)
  {
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH);
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
  }
  else if(dir==2)
  {
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,HIGH);
    digitalWrite(IN4,LOW);
  }
  else if(dir==-2)
  {
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,HIGH);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,HIGH);
  }
  else
  {
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,LOW);
    digitalWrite(IN3,LOW);
    digitalWrite(IN4,LOW);
  }

  analogWrite(ENA,m1);
  analogWrite(ENB,m2);
}

int sele()                //Funcion que detecta si el camino izquierdo o derecho es el mas largo girando hacia el mismo
{
  int iz;
  int de;
  int aux;
  motor(0,0,0);
  delay(200);
  
  servo1.write(0);
  delay(2000);
  de = ultra(t1,e1);
  delay(20);

  servo1.write(180);
  delay(2000);
  iz = ultra(t1,e1);
  delay(20);
  
  servo1.write(90);
  delay(500);
  
  if(de > iz)
  {
    aux = ultra(t2,e2);
    delay(20);
    while(aux < de)
    {
      motor(2,150,150);
      aux = ultra(t2,e2);
      delay(20);
    }
    return de;
  }
    
  else
  {
    aux = ultra(t2,e2);
    delay(20);
    while(aux < iz)
    {
      motor(-2,150,150);
      aux = ultra(t2,e2);
      delay(20);
    }
    return iz;
  }
}
