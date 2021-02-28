#include <LiquidCrystal.h>    // importa libreria

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);  // pines RS, E, D4, D5, D6, D7 de modulo 1602A

void setup() {
  lcd.begin(16, 2);     // inicializa a display de 16 columnas y 2 lineas
}

void loop() {
  lcd.setCursor(0, 0);      // ubica cursor en columna 0, linea 0
  lcd.print("TE AMO");  // escribe el texto en pantalla
  lcd.setCursor(0, 1);      // ubica cursor en columna 0, linea 1
  lcd.print(millis() / 1000);   // escribe valor en segundos devuelto por funcion millis()
  lcd.print(" MUCHO MUCHO");     // imprime a continuacion segundos
}
