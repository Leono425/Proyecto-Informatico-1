#include <LiquidCrystal.h>
#include <Adafruit_NeoPixel.h>

#define FLX A0
#define NEOPIN  3
#define CANTPIXEL 6
#define Botn 2

Adafruit_NeoPixel NEO = Adafruit_NeoPixel(CANTPIXEL, NEOPIN, NEO_GRB + NEO_KHZ800 );
LiquidCrystal LCD(8, 9, 10, 11, 12, 13);
byte grados[] = {
  B11100,
  B10100,
  B11100,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};
bool estadoBoton = 0;
bool ultimaVez = 0;

void setup()
{
  pinMode(FLX, INPUT);
  pinMode(Botn, INPUT);
  pinMode(NEOPIN, OUTPUT);
  
  NEO.begin();
  NEO.clear();
  NEO.show();
  LCD.begin(16,2);
  Serial.begin(9600);
  LCD.createChar(5,grados);
  attachInterrupt(digitalPinToInterrupt(Botn) , leer_boton, FALLING );
}

void loop()
{
  int Flex = map(analogRead(FLX), 1, 7, 180, 0);
 if(estadoBoton == 1)
{ 
  Flex = map(analogRead(FLX), 1, 7, 180, 0);
  Serial.print("btn:");
  Serial.println(estadoBoton);
  Serial.print("Flex: ");
  Serial.println(analogRead(FLX));
  Serial.print("Angulo: ");
  Serial.println(Flex);
  LCD.setCursor(0,0);
  LCD.print("Angulo: ");
  LCD.print(Flex);
  LCD.write(5);
  delay(500);
  LCD.clear();
}
 if(estadoBoton == 1)
{  
  if (Flex <= 30)
  {
    NEO.setPixelColor( 0 ,0 ,255 ,0 ,255 );
    NEO.setPixelColor( 1 ,0 ,0 ,0 ,0 );
    NEO.setPixelColor( 2 ,0 ,0 ,0 ,0 );
    NEO.setPixelColor( 3 ,0 ,0 ,0 ,0 );
    NEO.setPixelColor( 4 ,0 ,0 ,0 ,0 );
    NEO.setPixelColor( 5 ,0 ,0 ,0 ,0 );
    Serial.print("Led: ");
    Serial.println("1");
    Serial.print("Color: ");
    Serial.println("Verde");
    LCD.setCursor(0,1);
    LCD.print("Color: ");
    LCD.print("Verde");
  }
}
 if(estadoBoton == 1)
{ 
  if(Flex > 30 && Flex <= 60)
  {
    NEO.setPixelColor( 1 ,0 ,255 ,0 ,255 );
    NEO.setPixelColor( 2 ,0 ,0 ,0 ,0 );
    NEO.setPixelColor( 3 ,0 ,0 ,0 ,0 );
    NEO.setPixelColor( 4 ,0 ,0 ,0 ,0 );
    NEO.setPixelColor( 5 ,0 ,0 ,0 ,0 );
    Serial.print("Led: ");
    Serial.println("2");
    Serial.print("Color: ");
    Serial.println("Verde");
    LCD.setCursor(0,1);
    LCD.print("Color: ");
    LCD.print("Verde");
  }
}
 if(estadoBoton == 1)
{ 
    if(Flex > 60 && Flex <= 90)
  {
    NEO.setPixelColor( 2 ,255 ,255 ,0 ,255 );
    NEO.setPixelColor( 3 ,0 ,0 ,0 ,0 );
    NEO.setPixelColor( 4 ,0 ,0 ,0 ,0 );
    NEO.setPixelColor( 5 ,0 ,0 ,0 ,0 );
    Serial.print("Led: ");
    Serial.println("3");
    Serial.print("Color: ");
    Serial.println("Amarillo");
    LCD.setCursor(0,1);
    LCD.print("Color: ");
    LCD.print("Amarillo");
  }
}
 if(estadoBoton == 1)
{ 
    if(Flex > 90 && Flex <= 120)
  {
    NEO.setPixelColor( 3 ,255 ,255 ,0 ,255 );
    NEO.setPixelColor( 4 ,0 ,0 ,0 ,0 );
    NEO.setPixelColor( 5 ,0 ,0 ,0 ,0 );
    Serial.print("Led: ");
    Serial.println("4");
    Serial.print("Color: ");
    Serial.println("Amarillo");
    LCD.setCursor(0,1);
    LCD.print("Color: ");
    LCD.print("Amarillo"); 
  }
}
 if(estadoBoton == 1)
{ 
    if(Flex > 120 && Flex <= 179)
  {
    NEO.setPixelColor( 4 ,255 ,0 ,0 ,255 );
    NEO.setPixelColor( 5 ,0 ,0 ,0 ,0 );
    Serial.print("Led: ");
    Serial.println("5");
    Serial.print("Color: ");
    Serial.println("Rojo");
    LCD.setCursor(0,1);
    LCD.print("Color: ");
    LCD.print("Rojo");
  }
}
 if(estadoBoton == 1)
{ 
    if(Flex > 179 && Flex <= 180)
  {
    NEO.setPixelColor( 5 ,255 ,0 ,0 ,255 );
    Serial.print("Led: ");
    Serial.println("6");
    Serial.print("Color: ");
    Serial.println("Rojo");
    LCD.setCursor(0,1);
    LCD.print("Color: ");
    LCD.print("Rojo");
  }
}

  NEO.show();
  
 if(estadoBoton == 0)
{ 
   LCD.clear();
   NEO.clear();
  
}
}
void leer_boton()
{

  estadoBoton= !estadoBoton;
}

