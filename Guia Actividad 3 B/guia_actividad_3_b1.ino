#define POT A0
#define R 3
#define G 5
#define B 6


void setup()
{
  pinMode(R, OUTPUT);
  pinMode(POT, INPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop()
{
  int valorPot = analogRead(POT);
  int r = map(valorPot, 0, 341, 0, 255);
  int g = map(valorPot, 342, 682, 0, 255);
  int b = map(valorPot, 683, 1023, 0, 255);
  if (valorPot >= 0 && valorPot <= 341) 
  {
    r = map(valorPot, 0, 341, 0, 255);

    g = 0;
    b = 0;
  }
  else if (valorPot >= 342 && valorPot <= 682) {

    g = map(valorPot, 342, 682, 0, 255);

    r = 0;
    b = 0;
  }
  else {

    b = map(valorPot, 683, 1023, 0, 255);

    r = 0;
    g = 0;
  }
  analogWrite(R, r);
  analogWrite(G, g);
  analogWrite(B, b);

}