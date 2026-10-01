int Pines[] = {2, 4, 7, 8, 12};

void setup() 
{
  for (int i = 0; i < 5; i++)
  {
    pinMode(Pines[i], OUTPUT);
  }
}

void loop()
{
  PinesHigh(Pines);
}

void PinesHigh(int pines[])
{
  for (int i = 0; i < 5; i++) 
  {
    digitalWrite(pines[i], 1);
  }
}