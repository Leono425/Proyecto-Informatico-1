#define Led1 13
#define Led2 12
#define Led3 11
#define Led4 10
#define Led5 9
#define Led6 8
#define Led7 7
#define Led8 6
#define Led9 5
#define Led10 4
#define Botn 2

bool estadoBoton = 0;
bool ultimaVez = 0;
int donde =1;
void setup()
  
{
  Serial.begin(9600);
  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Led3, OUTPUT);
  pinMode(Led4, OUTPUT);
  pinMode(Led5, OUTPUT);
  pinMode(Led6, OUTPUT);
  pinMode(Led7, OUTPUT);
  pinMode(Led8, OUTPUT);
  pinMode(Led9, OUTPUT);
  pinMode(Led10, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(Botn) , leer_boton, FALLING );
}

void loop()
{


  if ( Botn == 0 && ultimaVez == 1)
  {
    estadoBoton = !estadoBoton;
    delay(100);
  }
  ultimaVez = Botn;
  
  
 if(estadoBoton == 1 && donde == 1)
 {  
   digitalWrite(Led1, 1);
   digitalWrite(Led2, 0);
   digitalWrite(Led3, 0);
   digitalWrite(Led4, 0);
   digitalWrite(Led5, 0);
   digitalWrite(Led6, 0);
   digitalWrite(Led7, 0);
   digitalWrite(Led8, 0);
   digitalWrite(Led9, 0);
   digitalWrite(Led10, 0) ;
   donde = 2;
   delay(400) ; 
 }
 if(estadoBoton == 1 && donde == 2)
 {
   digitalWrite(Led1, 0);
   digitalWrite(Led2, 1);
   digitalWrite(Led3, 0);
   digitalWrite(Led4, 0);
   digitalWrite(Led5, 0);
   digitalWrite(Led6, 0);
   digitalWrite(Led7, 0);
   digitalWrite(Led8, 0);
   digitalWrite(Led9, 0);
   digitalWrite(Led10, 0);
   donde = 3;
   delay(400);  
 }
 if(estadoBoton == 1 && donde == 3)
 {
   digitalWrite(Led1, 0);
   digitalWrite(Led2, 0);
   digitalWrite(Led3, 1);
   digitalWrite(Led4, 0);
   digitalWrite(Led5, 0);
   digitalWrite(Led6, 0);
   digitalWrite(Led7, 0);
   digitalWrite(Led8, 0);
   digitalWrite(Led9, 0);
   digitalWrite(Led10, 0);
   donde = 4;
   delay(400);  
 }
 if(estadoBoton == 1 && donde == 4)
 {
   digitalWrite(Led1, 0);
   digitalWrite(Led2, 0);
   digitalWrite(Led3, 0);
   digitalWrite(Led4, 1);
   digitalWrite(Led5, 0);
   digitalWrite(Led6, 0);
   digitalWrite(Led7, 0);
   digitalWrite(Led8, 0);
   digitalWrite(Led9, 0);
   digitalWrite(Led10, 0);
   donde = 5;
   delay(400);  
 }
 if(estadoBoton == 1 && donde == 5)
 {
   digitalWrite(Led1, 0);
   digitalWrite(Led2, 0);
   digitalWrite(Led3, 0);
   digitalWrite(Led4, 0);
   digitalWrite(Led5, 1);
   digitalWrite(Led6, 0);
   digitalWrite(Led7, 0);
   digitalWrite(Led8, 0);
   digitalWrite(Led9, 0);
   digitalWrite(Led10, 0); 
   donde = 6;
   delay(400);  
 }
 if(estadoBoton == 1 && donde == 6)
 {
   digitalWrite(Led1, 0);
   digitalWrite(Led2, 0);
   digitalWrite(Led3, 0);
   digitalWrite(Led4, 0);
   digitalWrite(Led5, 0);
   digitalWrite(Led6, 1);
   digitalWrite(Led7, 0);
   digitalWrite(Led8, 0);
   digitalWrite(Led9, 0);
   digitalWrite(Led10, 0);
   donde = 7;
   delay(400);  
 }
 if(estadoBoton == 1 && donde == 7)
 {
   digitalWrite(Led1, 0);
   digitalWrite(Led2, 0);
   digitalWrite(Led3, 0);
   digitalWrite(Led4, 0);
   digitalWrite(Led5, 0);
   digitalWrite(Led6, 0);
   digitalWrite(Led7, 1);
   digitalWrite(Led8, 0);
   digitalWrite(Led9, 0);
   digitalWrite(Led10, 0); 
   donde = 8;
   delay(400)  ;
 }
 if(estadoBoton == 1 && donde == 8)
 {
   digitalWrite(Led1, 0);
   digitalWrite(Led2, 0);
   digitalWrite(Led3, 0);
   digitalWrite(Led4, 0);
   digitalWrite(Led5, 0);
   digitalWrite(Led6, 0);
   digitalWrite(Led7, 0);
   digitalWrite(Led8, 1);
   digitalWrite(Led9, 0);
   digitalWrite(Led10, 0);
   donde = 9;
   delay(400);
 }
 if(estadoBoton == 1 && donde == 9)
 {
   digitalWrite(Led1, 0);
   digitalWrite(Led2, 0);
   digitalWrite(Led3, 0);
   digitalWrite(Led4, 0);
   digitalWrite(Led5, 0);
   digitalWrite(Led6, 0);
   digitalWrite(Led7, 0);
   digitalWrite(Led8, 0);
   digitalWrite(Led9, 1);
   digitalWrite(Led10, 0); 
   donde = 10;
   delay(400);
 }
 if(estadoBoton == 1 && donde == 10)
 {
   digitalWrite(Led1, 0);
   digitalWrite(Led2, 0);
   digitalWrite(Led3, 0);
   digitalWrite(Led4, 0);
   digitalWrite(Led5, 0);
   digitalWrite(Led6, 0);
   digitalWrite(Led7, 0);
   digitalWrite(Led8, 0);
   digitalWrite(Led9, 0);
   digitalWrite(Led10, 1);
   donde = 1;
   delay(400);
 }
}
void leer_boton()
{
  estadoBoton = !estadoBoton;
}