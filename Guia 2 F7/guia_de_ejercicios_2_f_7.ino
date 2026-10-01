int vector[] = {10, 4, 2};

void setup()
{
  Serial.begin(9600);
  ordenado(vector);
}

void loop()
{
 
}

void ordenado(int vector[])
{
    for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      if (vector[j] > vector[j + 1]) {
        int auxiliar = vector[j];
        vector[j] = vector[j + 1];
        vector[j + 1] = auxiliar;
      }
    }
 }
   for (int i = 0; i < 3; i++) {
     Serial.print(vector[i]);}
}
