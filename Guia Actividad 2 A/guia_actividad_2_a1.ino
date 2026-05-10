// C++ code
#define Led_R 3
void setup()
{
  pinMode(Led_R , OUTPUT);
}

void loop()
{
  analogWrite(Led_R, 50);
  delay(500);
  analogWrite(Led_R, 100);
  delay(500);
  analogWrite(Led_R, 150);
  delay(500);
  analogWrite(Led_R, 200);
  delay(500);
  analogWrite(Led_R, 250);
  delay(500);
}