void setup()
{
  Serial.begin(9600);
 
  if (esMultiplo(15, 3) == 1)
  {
    Serial.println("si es multiplo");
  }
  else
  {
    Serial.println("no es multiplo");
  }
  if (esMultiplo(20, 6) == 1)
  {
    Serial.println("si es multiplo");
  }
  else
  {
    Serial.println("no es multiplo");
  }
  if (esMultiplo(10, 0) == 1)
  {
    Serial.println("si es multiplo");
  }
  else
  {
    Serial.println("no es multiplo");
  }


}

void loop()
{
 
}

bool esMultiplo(int numero, int divisor)
{
  if (divisor == 0)
  {
    return false; 
  }
  if (numero % divisor == 0)
  {
    return true;
  } 
  else
  {
    return false;
  }
}