int Leds[] = {2, 4, 7, 8, 12};

void setup() 
{  
  for (int i = 0; i < 5; i++)
  {
    pinMode(Leds[i], OUTPUT);
  }
}
void loop()
{
  for (int i = 0; i < 4; i++)
  {
    digitalWrite(Leds[i], HIGH);
    delay(500);
    digitalWrite(Leds[i], LOW);
  }
  for (int i = 4; i > 0; i--)
  {
    digitalWrite(Leds[i], HIGH);
    delay(500);
    digitalWrite(Leds[i], LOW);
  }
}