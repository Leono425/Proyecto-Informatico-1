// C++ code
#define Led_R1 2
#define Led_G1 0
#define Led_B1 1
#define Led_R2 13
#define Led_G2 11
#define Led_B2 12
void setup()
{
  pinMode(Led_R1 , OUTPUT);
  pinMode(Led_G1 , OUTPUT);
  pinMode(Led_B1 , OUTPUT);
  pinMode(Led_R2 , OUTPUT);
  pinMode(Led_G2 , OUTPUT);
  pinMode(Led_B2 , OUTPUT);
}

void loop()
{
  digitalWrite(Led_G2 , 0);
  digitalWrite(Led_R2 , 0);
  digitalWrite(Led_R1 , 0);
  digitalWrite(Led_G1 , 0);
  digitalWrite(Led_B1 , 0);
  delay(500);
  digitalWrite(Led_R1 , 1);
  delay(500);
  digitalWrite(Led_R1 , 0);
  digitalWrite(Led_G1 , 1);
  digitalWrite(Led_B1 , 1);
  delay(500);
  digitalWrite(Led_B1 , 0);
  delay(500);
  digitalWrite(Led_B1 , 1);
  digitalWrite(Led_G1 , 0);
  digitalWrite(Led_R1 , 1);
  delay(500);
  digitalWrite(Led_R1 , 0);
  delay(500);
  digitalWrite(Led_G1 , 1);
  digitalWrite(Led_R1 , 1);
  delay(500);
  digitalWrite(Led_B1 , 0);
  delay(500);//FIN LED 1
  digitalWrite(Led_G1 , 0);
  digitalWrite(Led_R1 , 0);
  digitalWrite(Led_R2 , 0);
  digitalWrite(Led_G2 , 0);
  digitalWrite(Led_B2 , 0);
  delay(500);
  digitalWrite(Led_R2 , 1);
  delay(500);
  digitalWrite(Led_R2 , 0);
  digitalWrite(Led_G2 , 1);
  digitalWrite(Led_B2 , 1);
  delay(500);
  digitalWrite(Led_B2 , 0);
  delay(500);
  digitalWrite(Led_B2 , 1);
  digitalWrite(Led_G2 , 0);
  digitalWrite(Led_R2 , 1);
  delay(500);
  digitalWrite(Led_R2 , 0);
  delay(500);
  digitalWrite(Led_G2 , 1);
  digitalWrite(Led_R2 , 1);
  delay(500);
  digitalWrite(Led_B2 , 0);
  delay(500);
  

  
  
}