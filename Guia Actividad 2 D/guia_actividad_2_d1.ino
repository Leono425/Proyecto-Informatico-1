#define POT A0
#define RGB1_R 5
#define RGB1_G 6
#define RGB2_R 10
#define RGB2_B 3
void setup()
{
  pinMode(RGB1_R, OUTPUT);
  pinMode(RGB2_R, OUTPUT);
  pinMode(RGB1_G, OUTPUT);
  pinMode(RGB2_B, OUTPUT);
  pinMode(POT, INPUT);
}

void loop()
{
  int tiempo = analogRead(POT);
  analogWrite(RGB1_R, 255);
  analogWrite(RGB1_G, 255);
  analogWrite(RGB2_R, 255);
  analogWrite(RGB2_B, 255);
  delay(tiempo);
  analogWrite(RGB1_R, 0);
  analogWrite(RGB1_G, 0);
  analogWrite(RGB2_R, 0);
  analogWrite(RGB2_B, 0);
  delay(tiempo);
}