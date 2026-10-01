int Vector[5];

void setup() 
{
  Serial.begin(9600);
  randomSeed(analogRead(A0));
  MultiplosDiez(Vector);
  for (int i = 0; i < 5; i++) {
    Serial.print(Vector[i]);
    Serial.print(" ");
  }
  Serial.println();
}

void loop()
{
  
}

void MultiplosDiez(int vector[]) 
{
  for (int i = 0; i < 5; i++) 
  {
    vector[i] = random(0, 11) * 10;
  }
}