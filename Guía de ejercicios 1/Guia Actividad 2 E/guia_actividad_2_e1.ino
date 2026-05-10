#define POT_R A0
#define POT_B A1
#define POT_G A2
#define RGB_R 5
#define RGB_G 6
#define RGB_B 3
void setup()
{
  pinMode(RGB_R, OUTPUT);
  pinMode(RGB_B, OUTPUT);
  pinMode(RGB_G, OUTPUT);
  pinMode(POT_R, INPUT);
  pinMode(POT_B, INPUT);
  pinMode(POT_G, INPUT);
}

void loop()
{
  
  int valorR = analogRead(POT_R);
  int valorG = analogRead(POT_G);
  int valorB = analogRead(POT_B); 
  int valorRNUEVO = map(valorR,0,1023,0,255);
  int valorGNUEVO = map(valorG,0,1023,0,255);
  int valorBNUEVO = map(valorB,0,1023,0,255);
  analogWrite(RGB_R, valorRNUEVO);
  analogWrite(RGB_G, valorGNUEVO);
  analogWrite(RGB_B, valorBNUEVO);

}