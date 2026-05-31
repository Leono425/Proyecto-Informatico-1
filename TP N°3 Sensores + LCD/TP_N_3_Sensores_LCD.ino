#include <LiquidCrystal.h>

#define LEDR 2
#define LEDG 6
#define LEDB 1
#define POT 5
#define TMP A1
#define PHO A0
#define PIR 7
#define ECHO 3
#define TRIG 4

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


void setup()
{
  pinMode(LEDR , OUTPUT);
  pinMode(LEDG , OUTPUT);
  pinMode(LEDB , OUTPUT);
  pinMode(TMP  , INPUT );
  pinMode(PHO  , INPUT );
  pinMode(PIR  , INPUT );
  pinMode(ECHO , INPUT );
  pinMode(TRIG , OUTPUT);
  LCD.createChar(5,grados);
  LCD.begin(16,2);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);   
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);
                             
  float tiempo = pulseIn( ECHO , HIGH );
  float dist = tiempo / 57.6;
  int Luz = analogRead (PHO);
  int nuevaluz = map(Luz, 1 , 310 , 0 , 100 );
  float temperatura = (analogRead(TMP)*5.0/1024)*100-50;
  bool mov = digitalRead(PIR);
  Serial.print("Temp:");
  Serial.println(temperatura);
  Serial.print("Luz:");
  Serial.println(nuevaluz);
  Serial.print("Mov:");
  Serial.println(mov);
  Serial.print("Dist:");
  Serial.println(dist);
  if (nuevaluz <= 20)
  {
    if (temperatura > 39)
    {
      analogWrite(LEDR , 255);
      analogWrite(POT, 255);
      delay(1000);
      analogWrite(POT, 0);
      delay(1000);
    }
    else
    {
      analogWrite(LEDR, 0);
      analogWrite(POT, 0);
    }
    if (mov == 1 & temperatura <=39 )
    {
      analogWrite(LEDR , 255);
      analogWrite(LEDG , 255);
      analogWrite(POT, 255);
      delay(1000);
      analogWrite(POT, 0);
      delay(1000);
    }
    else
    {
      analogWrite(LEDR, 0);
      analogWrite(LEDG , 0);
      analogWrite(POT, 0);
    }
  }
  else
  {
    if (dist < 100)
    {
      analogWrite(LEDR , 255);
      analogWrite(POT, 50);
      delay(1000);
      analogWrite(POT, 100);
      delay(1000);
    }
    else
    {
      analogWrite(LEDR, 0);
      analogWrite(POT, 0);
    } 
  }
delay(100);
  LCD.clear();
  LCD.setCursor(0,0);
  LCD.print("Temp:");
  LCD.print(temperatura);
  LCD.setCursor(7,0);
  LCD.write(5);
  LCD.setCursor(8,0);
  LCD.print(" ");
  LCD.setCursor(0,1);
  LCD.print("Luz:");
  LCD.print(nuevaluz);
  LCD.print("%");
  LCD.setCursor(9,0);
  LCD.print("Mov:");
  LCD.print(mov ? "Si" : "No" );
  LCD.setCursor(9,1);
  LCD.print("Dist:");
  LCD.print(dist);
}