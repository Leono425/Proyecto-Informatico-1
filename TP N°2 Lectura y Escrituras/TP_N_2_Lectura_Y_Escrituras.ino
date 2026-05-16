#define R1 11
#define G1 10
#define R2 8
#define G2 9
#define B2 7
#define R3 4
#define G3 5
#define B3 3
#define Buzz 13
#define PotV A0
#define Poten1 A1
#define Poten2 A2
#define Poten3 A3
#define Botn 2


int Pote3;
int PotVV;
bool estadoBoton = 0;
bool ultimaVez = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(R1, OUTPUT);
  pinMode(G1, OUTPUT);
  
  pinMode(R2, OUTPUT);
  pinMode(G2, OUTPUT);
  pinMode(B2, OUTPUT);
  pinMode(R3, OUTPUT);
  pinMode(G3, OUTPUT);
  pinMode(B3, OUTPUT);
  pinMode(Buzz, OUTPUT);
  pinMode(PotV, INPUT);
  pinMode(Poten1, INPUT);
  pinMode(Poten2, INPUT);
  pinMode(Poten3, INPUT);
  attachInterrupt(digitalPinToInterrupt(Botn) , leer_boton, FALLING );
}

void loop()
{
  int Pot1 = analogRead(Poten1);
  int Pot2 = analogRead(Poten2);
  int Pot3 = analogRead(Poten3);
  int Pote1 = map(Pot1, 0, 1023, 0, 255);
  int Pote2 = map(Pot2, 0, 1023, 0, 152);
  int Pote3 = map(Pot3, 0, 1023, 0, 255);
  PotVV = analogRead(PotV);
  int Velocidad = map( PotVV, 0,1023,0,3000);
  Serial.print("Velocidad:");
  Serial.println(Velocidad/1000);
  Serial.print("RGB1:");
  Serial.println(Pote1);
  Serial.print("RGB2:");
  Serial.println(Pote2);
  Serial.print("RGB3:");
  Serial.println(Pote3);

  if ( Botn == 0 && ultimaVez == 1)
  {
    estadoBoton = !estadoBoton;
    delay(100);
  }
  ultimaVez = Botn;
  
  
 if(estadoBoton == 1)
 {  
  digitalWrite(Buzz, 1);
  delay(100);
  digitalWrite(Buzz, 0);
  analogWrite(G3, 0);
  analogWrite(B3, 0);
  analogWrite(R1, Pote1);
  delay(Velocidad);
 }
 if(estadoBoton == 1)
 {
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(R1, 255);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(R1, 255);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(R1, 255);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  digitalWrite(Buzz, 1);
  delay(100);
  digitalWrite(Buzz, 0);
  
  digitalWrite(R2, Pot2);
  digitalWrite(B2, Pot2);
  
 
  delay(Velocidad);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  digitalWrite(B2, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(R1, 255);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(R1, 255);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(R1, 255);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  digitalWrite(Buzz, 1);
  delay(100);
  digitalWrite(Buzz, 0);
  digitalWrite(B2, 0); 
  analogWrite(B3, Pote3);
  analogWrite(G3, Pote3);
  delay(Velocidad);
 }
 if(estadoBoton == 1)
 {
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  analogWrite(B3, 0);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(R1, 255);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(R1, 255);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(R1, 255);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
 }
 if(estadoBoton == 1)
 {
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
 }
 if(estadoBoton == 0)
 {
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  digitalWrite(B2, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  digitalWrite(B3, 0);
 }

}
void leer_boton()
{

  estadoBoton= !estadoBoton;
}