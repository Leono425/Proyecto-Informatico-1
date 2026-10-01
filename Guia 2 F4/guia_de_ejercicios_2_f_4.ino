#define PIR 7
#define Luz 2

void setup() 
{
  pinMode(PIR, INPUT);
  pinMode(Luz, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(Luz, movimiento());
}


bool movimiento() 
{
  bool mov = digitalRead(PIR);
  return mov;
}