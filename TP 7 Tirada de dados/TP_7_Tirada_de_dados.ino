#include <Adafruit_NeoPixel.h>

#define NEOPIN1    3
#define CANTPIXEL1 25
#define buz 6
                          //cant , pin ,conf (NEO_GRB + NEO_KHZ800)
Adafruit_NeoPixel NEO1 = Adafruit_NeoPixel(CANTPIXEL1, NEOPIN1, NEO_GRB + NEO_KHZ800 );

#define NEOPIN2    5
#define CANTPIXEL2 25
                          //cant , pin ,conf (NEO_GRB + NEO_KHZ800)
Adafruit_NeoPixel NEO2 = Adafruit_NeoPixel(CANTPIXEL2, NEOPIN2, NEO_GRB + NEO_KHZ800 );

#define BTN 2

bool estadoBoton = 0;
bool ultimaVez = 0;
int random1;
int random2;
bool ganastes = 0;
void setup()
{
  pinMode(NEOPIN1, OUTPUT);
  NEO1.begin();
  NEO1.clear();
  NEO1.show();
  
  pinMode(NEOPIN2, OUTPUT);
  NEO2.begin();
  NEO2.clear();
  NEO2.show();
  
  pinMode(buz, OUTPUT);
  
  pinMode( BTN, INPUT);
  attachInterrupt(digitalPinToInterrupt(BTN) , tirar_dados, FALLING );
  
  Serial.begin(9600);
  randomSeed(analogRead(A0));
}

void loop()
{
   if ((random1 + random2) == 7)
  {
    NEO1.fill(NEO1.Color(0,0,255), 0, 24);  
    NEO2.fill(NEO1.Color(0,0,255), 0, 24);
    NEO1.show();
    NEO2.show();
    analogWrite(buz, 100);
    delay(100);
    NEO1.fill(NEO1.Color(0,0,0), 0, 24);  
    NEO2.fill(NEO1.Color(0,0,0), 0, 24);
    NEO1.show();
    NEO2.show();
    analogWrite(buz, 50);
    delay(100);
    ganastes = 1;
  }
  if (random1 == 1 && ganastes == 0)
  {
    NEO1.fill(NEO1.Color(255,0,0), 0, 4);
  }
   if (random1 == 2 && ganastes == 0)
  {
    NEO1.fill(NEO1.Color(255,0,0), 0, 4);
    NEO1.fill(NEO1.Color(255,255,0), 4, 4);
  }
   if (random1 == 3 && ganastes == 0)
  {
    NEO1.fill(NEO1.Color(255,0,0), 0, 4);
    NEO1.fill(NEO1.Color(255,255,0), 4, 4); 
    NEO1.fill(NEO1.Color(255,130,0), 8, 4);
  }
   if (random1 == 4 && ganastes == 0)
  {
    NEO1.fill(NEO1.Color(255,0,0), 0, 4);
    NEO1.fill(NEO1.Color(255,255,0), 4, 4); 
    NEO1.fill(NEO1.Color(255,130,0), 8, 4); 
    NEO1.fill(NEO1.Color(130,255,0), 12, 4);
  }
   if (random1 == 5 && ganastes == 0)
  {
    NEO1.fill(NEO1.Color(255,0,0), 0, 4);
    NEO1.fill(NEO1.Color(255,255,0), 4, 4); 
    NEO1.fill(NEO1.Color(255,130,0), 8, 4); 
    NEO1.fill(NEO1.Color(130,255,0), 12, 4);
    NEO1.fill(NEO1.Color(0,255,0), 16, 4);
  }
   if (random1 == 6 && ganastes == 0)
  {
    NEO1.fill(NEO1.Color(255,0,0), 0, 4);
    NEO1.fill(NEO1.Color(255,255,0), 4, 4); 
    NEO1.fill(NEO1.Color(255,130,0), 8, 4); 
    NEO1.fill(NEO1.Color(130,255,0), 12, 4);
    NEO1.fill(NEO1.Color(0,255,0), 16, 4); 
    NEO1.fill(NEO1.Color(255,255,100), 20, 4);
  }
  if (random2 == 1 && ganastes == 0)
  {
    NEO2.fill(NEO2.Color(255,0,0), 0, 4);
  }
   if (random2 == 2 && ganastes == 0)
  {
    NEO2.fill(NEO2.Color(255,0,0), 0, 4);
    NEO2.fill(NEO2.Color(255,255,0), 4, 4);
  }
   if (random2 == 3 && ganastes == 0)
  {
    NEO2.fill(NEO2.Color(255,0,0), 0, 4);
    NEO2.fill(NEO2.Color(255,255,0), 4, 4); 
    NEO2.fill(NEO2.Color(255,130,0), 8, 4);
  }
   if (random2 == 4 && ganastes == 0)
  {
    NEO2.fill(NEO2.Color(255,0,0), 0, 4);
    NEO2.fill(NEO2.Color(255,255,0), 4, 4); 
    NEO2.fill(NEO2.Color(255,130,0), 8, 4); 
    NEO2.fill(NEO2.Color(130,255,0), 12, 4);
  }
   if (random2 == 5 && ganastes == 0)
  {
    NEO2.fill(NEO2.Color(255,0,0), 0, 4);
    NEO2.fill(NEO2.Color(255,255,0), 4, 4); 
    NEO2.fill(NEO2.Color(255,130,0), 8, 4); 
    NEO2.fill(NEO2.Color(130,255,0), 12, 4);
    NEO2.fill(NEO2.Color(0,255,0), 16, 4);
  }
   if (random2 == 6 && ganastes == 0)
  {
    NEO2.fill(NEO2.Color(255,0,0), 0, 4);
    NEO2.fill(NEO2.Color(255,255,0), 4, 4); 
    NEO2.fill(NEO2.Color(255,130,0), 8, 4); 
    NEO2.fill(NEO2.Color(130,255,0), 12, 4);
    NEO2.fill(NEO2.Color(0,255,0), 16, 4); 
    NEO2.fill(NEO2.Color(255,255,100), 20, 4);
  }
  NEO1.show();
  NEO2.show();
}
void tirar_dados()
{
  NEO1.clear();
  NEO2.clear();
  NEO1.show();
  NEO2.show();
  random1 = random(1,7);
  random2 = random(1,7);
  NEO2.fill(NEO2.Color(255,0,0), 0, random(0,24));
  NEO1.fill(NEO1.Color(255,0,0), 0, random(0,24));
  NEO1.show();
  NEO2.show();
  delay(300);
  NEO1.clear();
  NEO2.clear();
  NEO1.show();
  NEO2.show();
  delay(500);
  NEO2.fill(NEO2.Color(255,0,0), 0, random(0,24));
  NEO1.fill(NEO1.Color(255,0,0), 0, random(0,24));
  NEO1.show();
  NEO2.show();
  delay(300);
  NEO1.clear();
  NEO2.clear();
  NEO1.show();
  NEO2.show();
  delay(500);
  NEO2.fill(NEO2.Color(255,0,0), 0, random(0,24));
  NEO1.fill(NEO1.Color(255,0,0), 0, random(0,24));  
  NEO1.show();
  NEO2.show();
  delay(300);
  NEO1.clear();
  NEO2.clear();
  NEO1.show();
  NEO2.show();
  delay(500);
  Serial.print(random1);
  ganastes = 0;
}