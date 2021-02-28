//los pines de la araña se cuenta como un integrado el boton de power es la guia de la pata uno
#include <Servo.h> 
Servo servo1;

////piens servo 2, 3, 4, 5, 6, 7, 14, 15, 16, 17, 18, 19
////pines pata 1
#define SERVO_MANO1             A1 //ok
#define SERVO_CODO1             A0 //PK
#define SERVO_BASE1             A2 //OK
////pines pata 2
#define SERVO_MANO2             A4 //OK
#define SERVO_CODO2             A3 //ok
#define SERVO_BASE2             A5 //ok

////pines pata 3
#define SERVO_MANO3             6  //ok
#define SERVO_CODO3             5 //ok
#define SERVO_BASE3             7 //ok
//pata 4
#define SERVO_MANO4             3  //ok
#define SERVO_CODO4             2  //ok
#define SERVO_BASE4             4  //ok


 void setup()
 {
   servo1.attach(SERVO_MANO1);//AQUI COLOCA SERVO POR SERVO PARA CALIBRAR LOS 90
           
 }
void loop()
{
 
    servo1.write(140);
   
}
