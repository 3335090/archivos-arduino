const int a = 2 ;
const int b = 3 ;
const int c = 4 ;
const int d = 5 ;
const int  e = 6 ;
const int f = 7 ;
const int g = 8 ;
const int botonIncremento =9 ;
const int botonDecremento = 10;

const int tiempoAntirebote =10  ;
int cuenta = 0 ;
int estadoBotonIncremento;
int estadoBotonAnteriorIncremento;
int estadoBotonDecremento;
int estadoBotonAnteriorDecremento;

boolean antirebote (int pin) {
  int contador = 0;
  boolean estado;
  boolean estadoAnterior; 

  do {
    estado = digitalRead (pin);
    if (estado != estadoAnterior) {
      contador = 0;
      estadoAnterior = estado;}
      else {
        contador = contador + 1;}
        delay (1);
        while (contador <tiempoAntirebote);
        return estado;
        void setup (){
          Serial.begin (9600);
          pinMode (boton,INPUT);

}
void setup () {
  pinMode (a,OUTPUT);
  pinMode (b,OUTPUT);
  pinMode (c,OUTPUT);
  pinMode (d,OUTPUT);
  pinMode (e,OUTPUT);
  pinMode (f,OUTPUT);
  pinMode (g,OUTPUT);
  pinMode (botonIncremento, INPUT);
  pinMode (botonDecremento, INPUT);
}
 void loop(){
 
  estadoBotonIncremento = digitalRead (botonIncremento);
  if (estadoBotonIncremento != estadoBotonAnteriorIncremento){
    if (antirebote(botonIncremento)){
      cuenta++;
      if (cuenta >9){
        cuenta = 9;
      }} }
  estadoBotonAnteriorIncremento = estadoBotonIncremento;
  estadoBotonDecremento =digitalRead (botonDecremento);
  if (estadoBotonDecremento != estadoBotonAnteriorDecremento)
  cuenta++;
  if (cuenta <0){
    cuenta = 0;
  }}
  }
  estadoBotonAnteriorDecremento = estadoBotonDecremento;
    actualizarNumero();
  
void actualizarNumero()
        switch (cuenta);
    case 0:
digitalWrite (a, HIGH); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (e, HIGH);
digitalWrite (f, HIGH);
digitalWrite (g, LOW);
break ; 

case 1;
digitalWrite (a, LOW); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, LOW);
digitalWrite (e, LOW);
digitalWrite (f, LOW);
digitalWrite (g, LOW);
break; 
case 2;
digitalWrite (a, HIGH); 
digitalWrite (b, HIGH);
digitalWrite (c, LOW);
digitalWrite (d, HIGH);
digitalWrite (e, HIGH);
digitalWrite (f, LOW);
digitalWrite (g, HIGH);
break; 
case 3;
digitalWrite (a, HIGH); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (e, LOW);
digitalWrite (f, LOW);
digitalWrite (g, HIGH);
break; 
case 4;
digitalWrite (a, LOW); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, LOW);
digitalWrite (e, LOW);
digitalWrite (f, HIGH);
digitalWrite (g, HIGH);
break; 
case 5;
digitalWrite (a, HIGH); 
digitalWrite (b, LOW);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (e, LOW);
digitalWrite (f, HIGH);
digitalWrite (g, HIGH);
break; 

case 6;
digitalWrite (a, HIGH); 
digitalWrite (b, LOW);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (e, HIGH);
digitalWrite (f, HIGH);
digitalWrite (g, HIGH);
break); 

case 7;
digitalWrite (a, HIGH); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, LOW);
digitalWrite (e, LOW);
digitalWrite (f, LOW);
digitalWrite (g, LOW);
break; 

case 8;
digitalWrite (a, HIGH); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, HIGH);
digitalWrite (e, HIGH);
digitalWrite (f, HIGH);
digitalWrite (g, HIGH);
break;
case 9;
digitalWrite (a, HIGH); 
digitalWrite (b, HIGH);
digitalWrite (c, HIGH);
digitalWrite (d, LOW);
digitalWrite (e, LOW);
digitalWrite (f, HIGH);
digitalWrite (g, HIGH);
break);}
}
