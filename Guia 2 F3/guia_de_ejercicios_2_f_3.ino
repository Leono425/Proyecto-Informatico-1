#include <LiquidCrystal.h>

LiquidCrystal LCD(8, 9, 10, 11, 12, 13);

void setup() 
{
  LCD.begin(16,2);
  Serial.begin(9600);
  randomSeed(analogRead(A0));
}
void loop()
{
  Bienvenida();
  delay(1000);
  Inicio();
  delay(1000);
  Fin();
  delay(1000);
  Puntuacion();
  delay(1000);

}

void Bienvenida()
{
  LCD.clear();
  LCD.setCursor(3,0);
  LCD.print("Bienvenido");
  LCD.setCursor(4,1);
  LCD.print("al juego");
}
void Inicio()
{
  LCD.clear();
  LCD.setCursor(3,0);
  LCD.print("Este es el");
  LCD.setCursor(5,1);
  LCD.print("inicio");
}
void Fin()
{
  LCD.clear();
  LCD.setCursor(3,0);
  LCD.print("Este es el");
  LCD.setCursor(5,1);
  LCD.print("final");
}
void Puntuacion()
{
  LCD.clear();
  LCD.setCursor(0,0);
  LCD.print("Tu puntuacion es");
  LCD.setCursor(5,1);
  LCD.print(random(0,1001));
}
