// C++ code
#define Led_1 8
#define Led_2 7
#define Led_3 6
#define Led_4 5
#define Led_5 4
#define Led_6 3
#define Led_7 2
#define Led_8 1
#define Led_9 0
#define Led_10 9
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
  pinMode(Led_9 , OUTPUT);
  pinMode(Led_10 , OUTPUT);
}

void loop()
{
  digitalWrite(Led_1, 1);
  digitalWrite(Led_2, 0);
  digitalWrite(Led_3, 1);
  digitalWrite(Led_4, 0);
  digitalWrite(Led_5, 1);
  digitalWrite(Led_6, 0);
  digitalWrite(Led_7, 1);
  digitalWrite(Led_8, 0);
  digitalWrite(Led_9, 1);
  digitalWrite(Led_10, 0);
  delay(500);
  digitalWrite(Led_1, 0);
  digitalWrite(Led_2, 1);
  digitalWrite(Led_3, 0);
  digitalWrite(Led_4, 1);
  digitalWrite(Led_5, 0);
  digitalWrite(Led_6, 1);
  digitalWrite(Led_7, 0);
  digitalWrite(Led_8, 1);
  digitalWrite(Led_9, 0);
  digitalWrite(Led_10, 1);
  delay(500);
    
}