#define LED 2
#define BTN 4
bool vector[5];
int tiempo = 1000;

void setup() 
{  
  Serial.begin(9600);
  
  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT_PULLUP);
}
void loop()
{
    Serial.println("");
  for(int i = 0; i < 5; i++)
  {
    bool Presion = 0;
    digitalWrite(LED, 1);
    Serial.print(i);

    while(tiempo > 0)
    {
      if(digitalRead(BTN) == 1)
      {
        Presion = 1;
      }
      if(Presion == 1)
      {
        vector[i] = 1;
      }
      else
      {
        vector[i] = 0;
      }
      delay(1);
      tiempo = tiempo - 1;
    }
    
    digitalWrite(LED, 0);
    delay(1000);
    tiempo = 1000;
  }
  Serial.println("");
   for (int i = 0; i < 5; i++) 
   {
     Serial.print(vector[i]);
     vector[i] = 0;
   }
  Serial.println("");
  Serial.print("Reinicio");
  delay(3000);
}