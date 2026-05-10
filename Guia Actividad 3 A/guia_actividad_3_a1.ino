// C++ code
#define Led_R 0
#define Led_B 1
#define Buzzer 3
void setup()
{
  pinMode(Led_R, OUTPUT);
  pinMode(Led_G, OUTPUT);
  pinMode(Buzzer, OUTPUT);
}

void loop()
{
  analogWrite(Buzzer , 60);
  digitalWrite(Led_R , 1);
  digitalWrite(Led_B , 0);
  delay(500);
  digitalWrite(Led_R , 0);
  digitalWrite(Led_B , 1);
  analogWrite(Buzzer , 15);
  delay(500);
  digitalWrite(Led_R , 1);
  digitalWrite(Led_B , 0);
  analogWrite(Buzzer , 60);
  delay(500);
  digitalWrite(Led_R , 0);
  digitalWrite(Led_B , 1);
  analogWrite(Buzzer , 15);
  delay(500);
  analogWrite(Buzzer , 100);
  digitalWrite(Led_R , 1);
  digitalWrite(Led_B , 0);
  delay(1000);
  analogWrite(Buzzer , 50);
  digitalWrite(Led_R , 0);
  digitalWrite(Led_B , 1);
  delay(1000);
  
}