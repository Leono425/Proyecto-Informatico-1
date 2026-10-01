#define LED 2
bool vector[] = { 1, 0 ,0 ,1, 1, 0, 1, 1};

void setup() 
{
  Serial.begin(9600);
  
  pinMode(LED, OUTPUT);
}
void loop()
{
  for (int i = 0; i < 8; i++)
  {
    digitalWrite(LED, vector[i]);
    delay(500);
  }
}