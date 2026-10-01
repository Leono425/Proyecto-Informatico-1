int L1[] = {122 , 234 , 21};
int L2[] = {33  , 53  , 155};
int L3[] = {200 , 255 , 12};
#define R 3
#define G 5
#define B 6

void setup() 
{
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}
void loop()
{
  for (int i = 0; i < 3; i++)
  {
    analogWrite(R, L1[i]);
    analogWrite(G, L2[i]);
    analogWrite(B, L3[i]);
    delay(1000);
    digitalWrite(R, 0);
    digitalWrite(G, 0);
    digitalWrite(B, 0);
  }
}