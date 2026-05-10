// C++ code
#define Led_R 0
#define Led_G 1
#define Buzzer 2
void setup()
{
  pinMode(Led_R, OUTPUT);
  pinMode(Led_G, OUTPUT);
  pinMode(Buzzer, OUTPUT);
}

void loop()
{
  digitalWrite(Buzzer , 1);
  digitalWrite(Led_R , 1);
  digitalWrite(Led_G , 0);
  delay(750);
  digitalWrite(Buzzer , 0);
  digitalWrite(Led_R , 0);
  digitalWrite(Led_G , 1);
  delay(750);
}