#define LED1 2
#define LED2 4
bool vector1[] = {1, 0 ,0 ,1, 1, 0, 1, 1};
bool vector2[] = {0, 1 ,0 ,1, 0, 0, 1, 0};

void setup() 
{  
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}
void loop()
{
  for (int i = 0; i < 8; i++)
  {
    digitalWrite(LED1, vector1[i]);
    digitalWrite(LED2, vector2[i]);
    delay(500);
  }
}