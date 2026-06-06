#include <Adafruit_NeoPixel.h>

#define NEOPIN  3
#define CANTPIXEL 12
#define POT A0
#define BTN 2

Adafruit_NeoPixel NEO = Adafruit_NeoPixel(CANTPIXEL, NEOPIN, NEO_GRB + NEO_KHZ800 );

int valor;
int valormap;
uint32_t color;
uint32_t color2;
int contador = 0;
void setup()
{
  pinMode(NEOPIN, OUTPUT);
  pinMode(POT   , INPUT);
  pinMode(BTN   , INPUT);
  attachInterrupt(digitalPinToInterrupt(BTN) , leer_boton, FALLING );
  NEO.begin();
  NEO.clear();
  NEO.show();
  randomSeed(analogRead(A0));
}

void loop()
{
  //animacion 1°
 if (contador == 0)
 {
   valor = analogRead( POT );// analogRead = Lee el POT y le pones la informacion a la variable valor
   valormap = map( valor, 0,1023,0,300);
  NEO.fill(NEO.Color(0,0,0), 0, 12);
  NEO.setPixelColor( 0 ,255 ,0 ,0 ,255 );  
  NEO.setPixelColor( 11 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 0)
 {
  delay(valormap);
  NEO.setPixelColor( 1 ,0 ,255 ,0 ,255 );  
  NEO.setPixelColor( 0,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 0)
 {
  delay(valormap);
  NEO.setPixelColor( 2 ,0 ,0 ,255 ,255 );  
  NEO.setPixelColor( 1 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 0)
 {
  delay(valormap);
  NEO.setPixelColor( 3 ,255 ,0 ,0 ,255 );  
  NEO.setPixelColor( 2,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 0)
 {
  delay(valormap);
  NEO.setPixelColor( 4 ,0 ,255 ,0 ,255 );
  NEO.setPixelColor( 3 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 0)
 {
  delay(valormap);
  NEO.setPixelColor( 5 ,0 ,0 ,255 ,255 ); 
  NEO.setPixelColor( 4 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 0)
 {
  delay(valormap);
  NEO.setPixelColor( 6 ,255 ,0 ,0 ,255 );  
  NEO.setPixelColor( 5 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 0)
 {
  delay(valormap);
  NEO.setPixelColor( 7 ,0 ,255 ,0 ,255 );  
  NEO.setPixelColor( 6 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 0)
 {
  delay(valormap);
  NEO.setPixelColor( 8 ,0 ,0 ,255 ,255 );  
  NEO.setPixelColor( 7 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 0)
 {
  delay(valormap);
  NEO.setPixelColor( 9 ,255 ,0 ,0 ,255 ); 
  NEO.setPixelColor( 8 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 0)
 {
  delay(valormap);
  NEO.setPixelColor( 10 ,0 ,255 ,0 ,255 );
  NEO.setPixelColor( 9 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 0)
 {
  delay(valormap);
  NEO.setPixelColor( 11 ,0 ,0 ,255 ,255 );
  NEO.setPixelColor( 10,0 ,0 ,0 ,255 ); 
  NEO.show();
  delay(1000);
  contador = 1;
 }
  //animacion 2°
 if (contador == 1)
 {
  valor = analogRead( POT );// analogRead = Lee el POT y le pones la informacion a la variable valor
  valormap = map( valor, 0,1023,0,255);
  NEO.fill(NEO.Color(0,0,0), 0, 12);
  NEO.setPixelColor( 0 ,0 ,255 ,0 ,255 );  
  NEO.setPixelColor( 11 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 1)
 {
  delay(valormap);
  NEO.setPixelColor( 1 ,0 ,0 ,255 ,255 );  
  NEO.setPixelColor( 0,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 1)
 {
  delay(valormap);
  NEO.setPixelColor( 2 ,255 ,0 ,0 ,255 );  
  NEO.setPixelColor( 1 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 1)
 {
  delay(valormap);
  NEO.setPixelColor( 3 ,0 ,255 ,0 ,255 );  
  NEO.setPixelColor( 2,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 1)
 {
  delay(valormap);
  NEO.setPixelColor( 4 ,0 ,0 ,255 ,255 );
  NEO.setPixelColor( 3 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 1)
 {
  delay(valormap);
  NEO.setPixelColor( 5 ,255 ,0 ,0 ,255 ); 
  NEO.setPixelColor( 4 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 1)
 {
  delay(valormap);
  NEO.setPixelColor( 6 ,0 ,255 ,0 ,255 );  
  NEO.setPixelColor( 5 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 1)
 {
  delay(valormap);
  NEO.setPixelColor( 7 ,0 ,0 ,255 ,255 );  
  NEO.setPixelColor( 6 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 1)
 {
  delay(valormap);
  NEO.setPixelColor( 8 ,255 ,0 ,0 ,255 );  
  NEO.setPixelColor( 7 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 1)
 {
  delay(valormap);
  NEO.setPixelColor( 9 ,0 ,255 ,0 ,255 ); 
  NEO.setPixelColor( 8 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 1)
 {
  delay(valormap);
  NEO.setPixelColor( 10 ,0 ,0 ,255 ,255 );
  NEO.setPixelColor( 9 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 1)
 {
  delay(valormap);
  NEO.setPixelColor( 11 ,255 ,0 ,0 ,255 );
  NEO.setPixelColor( 10,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 1)
 {
  delay(1000);
  contador = 2;
 }
  //animacion 3
 if (contador == 2)
 {
  valor = analogRead( POT );// analogRead = Lee el POT y le pones la informacion a la variable valor
  valormap = map( valor, 0,1023,0,255);
  NEO.fill(NEO.Color(0,0,0), 0, 12);
  NEO.setPixelColor( 0 ,255 ,255 ,255 ,255 );  
  NEO.setPixelColor( 11 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 2)
 {
  delay(valormap);
  NEO.setPixelColor( 1 ,255 ,255 ,255 ,255 );  
  NEO.setPixelColor( 0,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 2)
 {
  delay(valormap);
  NEO.setPixelColor( 2 ,255 ,255 ,255 ,255 );  
  NEO.setPixelColor( 1 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 2)
 {
  delay(valormap);
  NEO.setPixelColor( 3 ,255 ,255 ,255 ,255 );  
  NEO.setPixelColor( 2,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 2)
 {
  delay(valormap);
  NEO.setPixelColor( 4 ,255 ,255 ,255 ,255 );
  NEO.setPixelColor( 3 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 2)
 {
  delay(valormap);
  NEO.setPixelColor( 5 ,255 ,255 ,255 ,255 ); 
  NEO.setPixelColor( 4 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 2)
 {
  delay(valormap);
  NEO.setPixelColor( 6 ,255 ,255 ,255 ,255 );  
  NEO.setPixelColor( 5 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 2)
 {
  delay(valormap);
  NEO.setPixelColor( 7 ,255 ,255 ,255 ,255 );  
  NEO.setPixelColor( 6 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 2)
 {
  delay(valormap);
  NEO.setPixelColor( 8 ,255 ,255 ,255 ,255 );  
  NEO.setPixelColor( 7 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 2)
 {
  delay(valormap);
  NEO.setPixelColor( 9 ,255 ,255 ,255 ,255 ); 
  NEO.setPixelColor( 8 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 2)
 {
  delay(valormap);
  NEO.setPixelColor( 10 ,255 ,255 ,255 ,255 );
  NEO.setPixelColor( 9 ,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 2)
 {
  delay(valormap);
  NEO.setPixelColor( 11 ,255 ,255 ,255 ,255 );
  NEO.setPixelColor( 10,0 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 2)
 {
  delay(1000);
  contador = 3;
 }
  //animacion 4
 if (contador == 3)
 {
  valor = analogRead( POT );// analogRead = Lee el POT y le pones la informacion a la variable valor
  valormap = map( valor, 0,1023,0,255);
  NEO.fill(NEO.Color(0,0,0), 0, 12);
  NEO.setPixelColor( 11 ,255 ,0 ,0 ,255 );  
  NEO.show();
 }
 if (contador == 3)
 {
  delay(valormap);
  NEO.setPixelColor( 10 ,255 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 3)
 {
  delay(valormap);
  NEO.setPixelColor( 9 ,255 ,0 ,0 ,255 );   
  NEO.show();
 }
 if (contador == 3)
 {
  delay(valormap);
  NEO.setPixelColor( 8 ,255 ,0 ,0 ,255 );  
  NEO.show();
 }
 if (contador == 3)
 {
  delay(valormap);
  NEO.setPixelColor( 7 ,255 ,0 ,0 ,255 );
  NEO.show();
 }
 if (contador == 3)
 {
  delay(valormap);
  NEO.setPixelColor( 6 ,255 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 3)
 {
  delay(valormap);
  NEO.setPixelColor( 5 ,255 ,0 ,0 ,255 );   
  NEO.show();
 }
 if (contador == 3)
 {
  delay(valormap);
  NEO.setPixelColor( 4 ,255 ,0 ,0 ,255 );  
  NEO.show();
 }
 if (contador == 3)
 {
  delay(valormap);
  NEO.setPixelColor( 3 ,255 ,0 ,0 ,255 );  
  NEO.show();
 }
 if (contador == 3)
 {
  delay(valormap);
  NEO.setPixelColor( 2 ,255 ,0 ,0 ,255 ); 
  NEO.show();
 }
 if (contador == 3)
 {
  delay(valormap);
  NEO.setPixelColor( 1 ,255 ,0 ,0 ,255 );
  NEO.show();
 }
 if (contador == 3)
 {
  delay(valormap);
  NEO.setPixelColor( 0 ,255 ,0 ,0 ,255 );
  NEO.show();
 }
 if (contador == 3)
 {
  delay(1000);
  contador = 4;
 }
  //animacion 5
 if (contador == 4)
 {
  valor = analogRead( POT );// analogRead = Lee el POT y le pones la informacion a la variable valor
  valormap = map( valor, 0,1023,0,255);
  color = NEO.Color(random(0,255), random(0,255), random(0,255));
  NEO.fill(NEO.Color(0,0,0), 0, 12);
  NEO.show();
 }
 if (contador == 4)
 {
  NEO.setPixelColor( 0 ,color );  
  NEO.show();
 }
 if (contador == 4)
 {
  delay(valormap);
  NEO.setPixelColor( 2 ,color);   
  NEO.show();
 }
 if (contador == 4)
 {
  delay(valormap);
  NEO.setPixelColor( 4 ,color);
  NEO.show();
 }
 if (contador == 4)
 {
  delay(valormap);
  NEO.setPixelColor( 6 ,color);   
  NEO.show();
 }
 if (contador == 4)
 {
  delay(valormap);
  NEO.setPixelColor( 8 ,color);  
  NEO.show();
 }
 if (contador == 4)
 {
  delay(valormap);
  NEO.setPixelColor( 10 ,color);
  NEO.show();
 }
 if (contador == 4)
 {
  delay(500);
  color2 = NEO.Color(random(0,255), random(0,255), random(0,255));
  NEO.fill(NEO.Color(0,0,0), 0, 12);
  NEO.show();
 }
 if (contador == 4)
 {
  NEO.setPixelColor( 1 ,color2); 
  NEO.show();
 }
 if (contador == 4)
 {
  delay(valormap);
  NEO.setPixelColor( 3 ,color2);  
  NEO.show();
 }
 if (contador == 4)
 {
  delay(valormap);
  NEO.setPixelColor( 5 ,color2); 
  NEO.show();
 }
 if (contador == 4)
 {
  delay(valormap);
  NEO.setPixelColor( 7 ,color2);  
  NEO.show();
 }
 if (contador == 4)
 {
  delay(valormap);
  NEO.setPixelColor( 9 ,color2); 
  NEO.show();
 }
 if (contador == 4)
 {
  delay(valormap);
  NEO.setPixelColor( 11 ,color2);
  NEO.show();
 }
 if (contador == 4)
 {
  delay(500);
  NEO.fill(NEO.Color(0,0,0), 0, 12);
  NEO.show();
 }
 if (contador == 4)
 {
  delay(1000);
  contador = 0;
 }
  if (contador > 4)
  {
    contador = 0;
  }
}
void leer_boton()
{
  contador = contador + 1;
}