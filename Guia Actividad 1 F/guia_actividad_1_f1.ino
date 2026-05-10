// C++ code
//
#define BTN 2
#define PZO 4
void setup()
{
  pinMode(BTN, INPUT);
  pinMode(PZO, OUTPUT);
}

void loop()
{
  bool botn = digitalRead(BTN);
  
  
  digitalWrite(PZO,botn );
  if (botn == 1)
  {
    digitalWrite(PZO,1);
    delay(200);
    digitalWrite(PZO,0);
    delay(200);
  }
}