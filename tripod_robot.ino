#include <Servo.h>

int angulo;
Servo motorHuno;
Servo motorPuno;
Servo motorHdos ;
Servo motorPdos;
Servo motorHtres;
Servo motorPtres;
Servo motorHcuatro;
Servo motorPcuatro;
void setup() {
Serial.begin (9600);
 motorHuno.attach (2); 
 motorPuno.attach (4);
 motorHdos.attach (7); 
 motorPdos.attach (8); 
 motorHtres.attach (12) ; 
 motorPtres.attach(13) ;
 motorHcuatro.attach (5);
 motorPcuatro.attach (6);
}

void loop() {

  motorHuno.write(0);
 motorPuno.write(0);
 motorHdos.write(0);
 motorPdos.write (0);
 motorHtres.write(0);
 motorPtres.write(0);
 motorHcuatro.write (0);
 motorPcuatro.write (0);
delay (1000);

 motorHuno.write(90);
 motorPuno.write(0);
 delay (1000); 
 motorHdos.write(90);
 motorPdos.write (0);
 delay (1000);
 motorHtres.write(90);
 motorPtres.write(180);
 motorHcuatro.write (90);
 motorPcuatro.write (180);
delay (1000);

motorHuno.write(45);
 motorPuno.write(330);
 motorHdos.write(0);
 motorPdos.write (0);
 delay (1000);
 motorHtres.write(0);
 motorPtres.write(0);
 motorHcuatro.write (0);
 motorPcuatro.write (0);
 delay (2000) ;

 motorHuno.write(0);
 motorPuno.write(-45);
 motorHdos.write(0);
 motorPdos.write (-45);
 delay (2000);
 motorHtres.write(0);
 motorPtres.write(-45);
 motorHcuatro.write (0);
 motorPcuatro.write(-45); 

 
}
