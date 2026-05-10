
#define Led_R1 11
#define Led_G1 9
#define Led_B1 10
void setup()
{
  pinMode(Led_R1 , OUTPUT);
  pinMode(Led_G1 , OUTPUT);
  pinMode(Led_B1 , OUTPUT);
}

void loop()
{
  analogWrite(Led_B1 , 0);
  analogWrite(Led_G1 , 0);
  analogWrite(Led_R1 , 0);
  analogWrite(Led_B1 , 255);
  analogWrite(Led_G1 , 255);
  delay(1000);
  analogWrite(Led_B1 , 0);
  analogWrite(Led_G1 , 0);
  analogWrite(Led_R1 , 255);
  delay(1000);
  analogWrite(Led_G1 , 255);
  delay(1000);
}