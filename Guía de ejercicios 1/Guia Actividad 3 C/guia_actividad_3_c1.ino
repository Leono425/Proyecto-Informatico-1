#define R1 13
#define G2 12
#define B3 11
#define R4 10
#define G4 9
#define B5 8
#define G5 7
#define R6 6
#define B6 5
#define Pot A0
#define Botn 4
bool estadoBoton = 0;
bool ultimaVez = 0;
void setup()
{
  pinMode(R1, OUTPUT);
  pinMode(G2, OUTPUT);
  pinMode(B3, OUTPUT);
  pinMode(R4, OUTPUT);
  pinMode(G4, OUTPUT);
  pinMode(B5, OUTPUT);
  pinMode(G5, OUTPUT);
  pinMode(R6, OUTPUT);
  pinMode(B6, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(Botn) , leer_boton, FALLING );

}

void loop()
{
  bool Botn1 = digitalRead(Botn);
  
  if ( Botn1 == 0 && ultimaVez == 1)
  {
    estadoBoton = !estadoBoton;
    delay(100);
  }
  ultimaVez = Botn1;
  
 if(estadoBoton == 1)
 {     
  int Velocidad = analogRead(Pot);
  digitalWrite(R6, 0);
  digitalWrite(B6, 0);
  digitalWrite(R1, 1);
  delay(Velocidad);
  digitalWrite(R1, 0) ;
  digitalWrite(G2, 1);
  delay(Velocidad);
  digitalWrite(G2, 0);
  digitalWrite(B3, 1);
  delay(Velocidad);
  digitalWrite(B3, 0);
  digitalWrite(R4, 1);
  digitalWrite(G4, 1);
  delay(Velocidad);
  digitalWrite(R4, 0);
  digitalWrite(G4, 0);
  digitalWrite(G5, 1);
  digitalWrite(B5, 1);
  delay(Velocidad);
  digitalWrite(G5, 0);
  digitalWrite(B5, 0);
  digitalWrite(R6, 1);
  digitalWrite(B6, 1);
  delay(Velocidad);  
 }
}
void leer_boton()
{
  estadoBoton= !estadoBoton;
  
}
