/*
 
 * http://www.editronikx.com
 * codigo de control de araña
 * en este vídeo veremos la forma como programar la araña robotica de 4 patas de una manera básica pero efectiva
ensamble araña robotica
https://www.youtube.com/watch?v=61Lf9sjl4po&t=7s
*********************************************************************

 * 
*/
#include <Servo.h> 
Servo   servo1mano;
Servo   servo1codo;
Servo   servo2mano; 
Servo   servo2codo; 
Servo   servo3mano; 
Servo   servo3codo;
Servo   servo4mano;
Servo   servo4codo;

////piens servo 2, 3, 4, 5, 6, 7, 14, 15, 16, 17, 18, 19

#define SERVO_MANO1          3 //ok
#define SERVO_CODO1             5 //PK
////pines pata 2
#define SERVO_MANO2             6 //OK
#define SERVO_CODO2             9 //ok
////pines pata 3
#define SERVO_MANO3             10  //ok
#define SERVO_CODO3             11 //ok
//pata 4
#define SERVO_MANO4             12  //ok
#define SERVO_CODO4             13  //ok

int tiempo = 200;
void setup()
 {
   servo1mano.attach(SERVO_MANO1);
   servo1codo.attach(SERVO_CODO1); 
   servo2mano.attach(SERVO_MANO2);
   servo2codo.attach(SERVO_CODO2); 
//
servo3mano.attach(SERVO_MANO3);
servo3codo.attach(SERVO_CODO3);
//    
   servo4mano.attach(SERVO_MANO4);
   servo4codo.attach(SERVO_CODO4); 
   configuracion_inicial_servos();
   delay(2000);
   for (int i=0;i<=3;i++)
   {
     subir_bajar();
     } }

void subir_bajar()
{
  configuracion_inicial_servos();
  delay(600);
  bajar();
  delay(600);
}
void configuracion_inicial_servos()
{
    servo1codo.write(90);
    servo1mano.write(90);
//    
    servo2codo.write(90);
    servo2mano.write(90);
//    
    servo3codo.write(90);
    servo3mano.write(90);
//    
    servo4codo.write(90);
    servo4mano.write(90);
}
void mover_cuadrado()
{
    servo1codo.write(90);
    servo1mano.write(90);
//    
    servo2codo.write(90);
    servo2mano.write(90);
//    
    servo3codo.write(90);
    servo3mano.write(90);
//    
    servo4codo.write(90);
    servo4mano.write(90);
}
void bajar()
{
    servo1codo.write(130);
    servo1mano.write(130); 
//    
    servo2codo.write(50);
    servo2mano.write(50);
//    
    servo3codo.write(130);
    servo3mano.write(130);
//    
    servo4codo.write(50);
    servo4mano.write(50);
}
//////////////////////////7
void mover2_dos()
{
    servo2codo.write(20);
    delay(200);
    servo2codo.write(65);
    servo2mano.write(50);
    delay(tiempo);   
}
void mover1_dos()
{
    servo1codo.write(160);
    delay(200);
    servo1codo.write(130);
    servo1mano.write(130);
    delay(tiempo);   
}
void mover3_dos()
{
    servo3codo.write(160);
    delay(200);
    servo3codo.write(130);
    servo3mano.write(130);
    delay(tiempo);   
}
void mover4_dos()
{
    servo4codo.write(20);
    delay(200);
    servo4codo.write(50);
    servo4mano.write(50);
   
    delay(tiempo);   
}
void mover_adelante()
{
  
mover2_dos();
mover1_dos();

mover3_dos();
mover4_dos();
//moverbases();

}
