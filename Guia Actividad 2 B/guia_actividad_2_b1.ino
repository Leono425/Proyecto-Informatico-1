// C++ code
#define Led_1 13
#define Led_2 11
#define Led_3 10
#define Led_4 9
#define Led_5 6
#define Led_6 5
#define Led_7 3
#define Led_8 2
void setup()
{
  pinMode(Led_1 , OUTPUT);
  pinMode(Led_2 , OUTPUT);
  pinMode(Led_3 , OUTPUT);
  pinMode(Led_4 , OUTPUT);
  pinMode(Led_5 , OUTPUT);
  pinMode(Led_6 , OUTPUT);
  pinMode(Led_7 , OUTPUT);
  pinMode(Led_8 , OUTPUT);
}

void loop()
{
  digitalWrite(Led_1, 0);
  analogWrite(Led_2, 42);
  analogWrite(Led_3, 84);
  analogWrite(Led_4, 128);
  analogWrite(Led_5, 180);
  analogWrite(Led_6, 200);
  analogWrite(Led_7, 222);
  digitalWrite(Led_8, 1);
  
}
