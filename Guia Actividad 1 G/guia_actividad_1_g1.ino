#define Botn 2
#define RGB1 4
#define RGB2 5
#define RGB3 6
int contador = 0;
int presionado1;

void setup()
{
  pinMode( Botn  , INPUT);
  pinMode( RGB1  , OUTPUT);
  pinMode( RGB2  , OUTPUT);
  pinMode( RGB3  , OUTPUT);
}

void loop()
{
  int Cambio = !digitalRead(Botn);

  if (Cambio == 0)
  {
    presionado1 = 1; 
  }
  if (Cambio == 1 && presionado1 == 1)
  {
   presionado1 = 0;  
   contador++;       
   if (contador > 3)
    {
      contador = 1; 
    }
  }
 
 if (contador == 1)
 {
   digitalWrite(RGB1, 1);
   digitalWrite(RGB2,0);
   digitalWrite(RGB3,0);
 }
   if (contador == 2)
 {
   digitalWrite(RGB2, 1);
   digitalWrite(RGB1,0);
   digitalWrite(RGB3,0);
 }
   if (contador == 3)
 {
   digitalWrite(RGB3, 1);
   digitalWrite(RGB1,0);
   digitalWrite(RGB2,0);
 }
  
  
}
