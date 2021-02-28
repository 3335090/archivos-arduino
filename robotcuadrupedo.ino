/***   Included libraries  ***/

#include <Servo.h>
#include <NewPing.h>

Servo hip_1;Servo leg_1;
Servo hip_2;Servo leg_2;
Servo hip_3;Servo leg_3;
Servo hip_4;Servo leg_4;
Servo servo_ultrasonido;
int ultrasonidos (12,13);
int t1 =12;
int e1 = 11;
String datos = "";
String movimiento = "";
float tiempo1 = 500;
float tiempo2 = 75;
float distancia = 0;
float distancia_izq = 0;
float distancia_der = 0;
void recibir_datos () {
  datos = Serial.readString();
  if (datos.length() == 1) {
    movimiento = datos;
    datos = "";
  }
  if (datos.length() == 3) {
    tiempo1 = datos.toInt();

    datos = "";
  }}
void reposo () {
  hip_1.write(90);
  leg_1.write(90);
  hip_2.write(90);
  leg_2.write(90);
  hip_3.write(90);
  leg_3.write(90);
  hip_4.write(90);
  leg_4.write(90);
}
void up () {
  hip_1.write(90);
  leg_1.write(45);
  hip_2.write(90);
  leg_2.write(135);
  hip_3.write(90);
  leg_3.write(135);
  hip_4.write(90);
  leg_4.write(45);
}
void down () {
  hip_1.write(90);
  leg_1.write(135);
  hip_2.write(90);
  leg_2.write(45);
  hip_3.write(90);
  leg_3.write(45);
  hip_4.write(90);
  leg_4.write(135);
}
void turnright1 () {
  leg_1.write(120);
  hip_1.write(45);
  delay(tiempo2);
  leg_1.write(90);
  delay(tiempo1);
  leg_3.write(60);
  hip_3.write(45);
  delay(tiempo2);
  leg_3.write(90);
  delay(tiempo1);
  leg_2.write(60);
  hip_2.write(45);
  delay(tiempo2);
  leg_2.write(90);
  delay(tiempo1);
  leg_4.write(120);
  hip_4.write(45);
  delay(tiempo2);
  leg_4.write(90);
  delay(tiempo1);
}
void turnleft1 () {
  leg_1.write(120);
  hip_1.write(135);
  delay(tiempo2);
  leg_1.write(90);
  delay(tiempo1);
  leg_3.write(60);
  hip_3.write(135);
  delay(tiempo2);
  leg_3.write(90);
  delay(tiempo1);
  leg_2.write(60);
  hip_2.write(135);
  delay(tiempo2);
  leg_2.write(90);
  delay(tiempo1);
  leg_4.write(120);
  hip_4.write(135);
  delay(tiempo2);
  leg_4.write(90);
  delay(tiempo1);
}
void turn () {
  hip_1.write(90);
  hip_2.write(90);
  hip_3.write(90);
  hip_4.write(90);
}
void start () {
  leg_2.write(60);
  hip_2.write(135);
  delay(tiempo2);
  leg_2.write(90);
  leg_1.write(120);
  hip_1.write(45);
  delay(tiempo2);
  leg_1.write(90);
  leg_3.write(60);
  hip_3.write(90);
  delay(tiempo2);
  leg_3.write(90);
  leg_4.write(120);
  hip_4.write(90);
  delay(tiempo2);
  leg_4.write(90);
}
void forward2 () {
  leg_1.write(120);
  hip_1.write(135);
}
void backward2 () {
  leg_2.write(60);
  hip_2.write(45);
}
void forward3 () {
  hip_2.write(90);
  hip_3.write(135);
  hip_4.write(135);
  delay(tiempo2);
  leg_1.write(90);
  hip_1.write(90);
}
void backward3 () {
  hip_1.write(90);
  hip_3.write(45);
  hip_4.write(45);
  delay(tiempo2);
  leg_2.write(90);
  hip_2.write(90);
}
void forward4 () {
  leg_3.write(60);
  hip_3.write(45);
  delay(tiempo2);
  leg_3.write(90);
}
void backward4 () {
  leg_4.write(60);
  hip_4.write(135);
  delay(tiempo2);
  leg_4.write(90);
}
void forward5 () {
  leg_4.write(120);
  hip_4.write(45);
}
void backward5 () {
  leg_3.write(60);
  hip_3.write(135);
}
void forward6 () {
  hip_3.write(90);
  hip_2.write(45);
  hip_1.write(45);
  delay(tiempo2);
  leg_4.write(90);
  hip_4.write(90);
}
void backward6 () {
  hip_4.write(90);
  hip_2.write(135);
  hip_1.write(135);
  delay(tiempo2);
  leg_3.write(90);
  hip_3.write(90);
}
void forward7 () {
  leg_2.write(60);
  hip_2.write(135);
  delay(tiempo2);
  leg_2.write(90);
}
void backward7 () {
  leg_1.write(120);
  hip_1.write(45);
  delay(tiempo2);
  leg_1.write(90);
}
void backward () {
  backward2();
  delay(tiempo1);
  backward3();
  delay(tiempo1);
  backward4();
  delay(tiempo1);
  backward5();
  delay(tiempo1);
  backward6();
  delay(tiempo1);
  backward7();
  delay(tiempo1);
}
void forward () {
  forward2();
  delay(tiempo1);
  forward3();
  delay(tiempo1);
  forward4();
  delay(tiempo1);
  forward5();
  delay(tiempo1);
  forward6();
  delay(tiempo1);
  forward7();
  delay(tiempo1);
}
void test1 () {
  hip_1.write(135);
  hip_2.write(45);
  hip_3.write(135);
  hip_4.write(45);
}
void test2 () {
  hip_1.write(45);
  hip_2.write(135);
  hip_3.write(45);
  hip_4.write(135);
}
void detectar_obstaculos () {
  distancia = ultrasonidos.read();
  if (distancia <= 20) {
    reposo();
    servo_ultrasonido.write(180);
    delay(400);
    distancia_izq = ultrasonidos.read();
    delay(100);
    servo_ultrasonido.write(20);
    delay(400);
    distancia_der = ultrasonidos.read();
    delay(100);
    servo_ultrasonido.write(100);
    delay(200);
    if ((distancia_der >= distancia_izq)) {
      for (int bitbloqForCounter = 0; bitbloqForCounter < 2; bitbloqForCounter += 1) {
        turnright1();
        delay(tiempo1);
        turn();
        delay(tiempo1);
      }
      while (ultrasonidos.read() <= 20) {
        for (int bitbloqForCounter = 0; bitbloqForCounter < 2; bitbloqForCounter += 1) {
          turnright1();
          delay(tiempo1);
          turn();
          delay(tiempo1);
        }
      }
    }
    if ((distancia_der < distancia_izq)) {
      for (int bitbloqForCounter = 0; bitbloqForCounter < 2; bitbloqForCounter += 1) {
        turnleft1();
        delay(tiempo1);
        turn();
        delay(tiempo1);
      }
      while (ultrasonidos.read() <= 20) {
        for (int bitbloqForCounter = 0; bitbloqForCounter < 2; bitbloqForCounter += 1) {
          turnleft1();
          delay(tiempo1);
          turn();
          delay(tiempo1);}}}}}

/***   Setup  ***/void setup() {
  puerto_serie_0.begin(9600);
  hip_1.attach(2);
  leg_1.attach(3);
  hip_2.attach(4);
  leg_2.attach(5);
  hip_3.attach(6);
  leg_3.attach(7);
  hip_4.attach(8);
  leg_4.attach(9);
  servo_ultrasonido.attach(10);

  reposo();
  servo_ultrasonido.write(100);
}


/***   Loop  ***/void loop() {
  recibir_datos();
  if (movimiento == "S") {
    reposo();
    movimiento = "";
  }
  if (movimiento == "U") {
    up();
    movimiento = "";
  }
  if (movimiento == "D") {
    down();
    movimiento = "";
  }
  if (movimiento == "F") {
    start();
    while (movimiento == "F") {
      detectar_obstaculos();
      forward();
      recibir_datos();
    }
  }
  if (movimiento == "B") {
    start();
    while (movimiento == "B") {
      detectar_obstaculos();
      backward();
      recibir_datos();
    }
  }
  if (movimiento == "L") {
    reposo();
    while (movimiento == "L") {
      delay(tiempo1);
      turnleft1();
      delay(tiempo1);
      turn();
      recibir_datos();
    }
  }
  if (movimiento == "R") {
    reposo();
    while (movimiento == "R") {
      delay(tiempo1);
      turnright1();
      delay(tiempo1);
      turn();
      recibir_datos();
    }
  }
}
void puerto_serie_0 () {
  
  datos=0;
  
  }
