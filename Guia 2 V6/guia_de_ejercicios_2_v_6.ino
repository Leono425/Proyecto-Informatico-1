int vector[] = {2, 6, 10, 11};

void setup() 
{  
  Serial.begin(9600);
  for(int i = 0; i < 4; i++)
  {
    Serial.println("");
    for(int j = 1; j < 6; j++)
    {
      Serial.print(vector[i]*j);
      Serial.print(" ");
    }
  }
}
void loop()
{

}