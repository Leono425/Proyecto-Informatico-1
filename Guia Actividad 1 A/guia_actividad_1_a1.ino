// C++ code
#define Led_R 2
#define Led_Y 4
#define Led_G 7
#define Led_W 8
#define Led_O 12
void setup()
{
  pinMode(Led_R, OUTPUT);
  pinMode(Led_Y, OUTPUT);
  pinMode(Led_G, OUTPUT);
  pinMode(Led_W, OUTPUT);
  pinMode(Led_O, OUTPUT);
}

void loop()
{
  digitalWrite(Led_Y, 0);
  digitalWrite(Led_W, 1);
  digitalWrite(Led_G, 0);
  digitalWrite(Led_R, 1);
  digitalWrite(Led_O, 0);
  delay(1000);
  digitalWrite(Led_R, 0);
  digitalWrite(Led_Y, 1);
  digitalWrite(Led_O, 1);
  digitalWrite(Led_W, 0);
  delay(500);
  digitalWrite(Led_Y, 0);
  digitalWrite(Led_G, 1);
  digitalWrite(Led_W, 0);
  delay(1000);
  digitalWrite(Led_Y, 1);
  digitalWrite(Led_G, 0);
  digitalWrite(Led_O, 1);
  delay(500);
}