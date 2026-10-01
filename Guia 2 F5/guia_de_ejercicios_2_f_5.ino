void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(A0)); 
}

void loop()
{
  Serial.print("Resultado D6: ");
  Serial.println(lanzarDado(6));
  
  delay(10);

  Serial.print("Resultado D20: ");
  Serial.println(lanzarDado(20));

  delay(2000);
}

int lanzarDado(int lados) 
{
  return random(1, lados + 1);
}