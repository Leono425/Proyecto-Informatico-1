#define Botn 2
#define R 3
#define G 6
#define B 5
int contador = 0;
int presionado1;

void setup()
{
  pinMode( Botn  , INPUT);
  pinMode( R  , OUTPUT);
  pinMode( G  , OUTPUT);
  pinMode( B  , OUTPUT);
}

void loop()
{
  int Cambio = !digitalRead(Botn);

  if (Cambio == 0)
  {
    presionado1 = 1;   //Variable del antirrebote que cambia cuando se presiona el pulsador
  }
  if (Cambio == 1 && presionado1 == 1)
  {
   presionado1 = 0;  //Se reinicia la variable antirrebote
   contador++;       //Aumenta el contador
   if (contador > 7)
    {
      contador = 1; //Si el contador esta en 9 y se aumenta, sigue mostrando el 9
    }
  }
 
 if (contador == 1)
 {
   digitalWrite(R, 1);
   digitalWrite(G,0);
   digitalWrite(B,0);
 }
   if (contador == 2)
 {
   digitalWrite(R, 0);
   digitalWrite(G,1);
   digitalWrite(B,1);
 }
   if (contador == 3)
 {
   digitalWrite(G, 1);
   digitalWrite(R,0);
   digitalWrite(B,0);
 }
     if (contador == 4)
 {
   digitalWrite(B, 1);
   digitalWrite(R,1);
   digitalWrite(G,0);
 }
     if (contador == 5)
 {
   digitalWrite(B, 1);
   digitalWrite(R,0);
   digitalWrite(G,0);
 }
     if (contador == 6)
 {
   digitalWrite(B, 1);
   digitalWrite(R,1);
   digitalWrite(G,1);
 }
     if (contador == 7)
 {
   digitalWrite(B,0);
   digitalWrite(R,1);
   digitalWrite(G,1);
 }
 
}
