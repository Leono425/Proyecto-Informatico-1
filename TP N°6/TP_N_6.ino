#define IN3 4
#define IN4 3
#define EN  6
#define NMOS 5
#define PIR 7
#define TMP A1

void setup()
{
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(EN, OUTPUT);
  pinMode(NMOS, OUTPUT);
  pinMode(PIR, INPUT);
  pinMode(TMP, INPUT);
}

void loop()
{
  bool movimiento = digitalRead(PIR);
  float temperatura = (analogRead(TMP) * 5.0 / 1024.0) * 100.0 - 50.0;
  if (movimiento == 1)
  {
    analogWrite(NMOS, 50);
  }
  else
  {
    analogWrite(NMOS, 0);
  }

  if (temperatura >= 50 && movimiento == 0)
  {
    analogWrite(EN,255);
    digitalWrite(IN3,1);
    digitalWrite(IN4,0);
  }
  else if (temperatura < 50 && movimiento == 0)
  {
    analogWrite(EN,0);
    digitalWrite(IN3,1);
    digitalWrite(IN4,0);
  }
  
  if (movimiento == 1 && temperatura >= 50 )
  {
    analogWrite(EN,255);
    digitalWrite(IN3,1);
    digitalWrite(IN4,0);
  }
  else if (movimiento == 1 && temperatura <= 15)
  {
    analogWrite(EN,50);
    digitalWrite(IN3,1);
    digitalWrite(IN4,0);
  }
  else if (movimiento == 1)
  {
    analogWrite(EN,150);
    digitalWrite(IN3,1);
    digitalWrite(IN4,0);
  }
 
}