float vector[] = {5.4, 5.39, 5.38, 5.31, 5.21, 5.03, 4.45, 3.95, 2.6, 1.49};
float maximo = 0;
void setup() 
{
  Serial.begin(9600);

  for (int i = 0; i < 9; i++) {
    if (vector[i] > maximo) {
      maximo = vector[i];
    }
  }

  Serial.print("El numero mas grande es: ");
  Serial.println(maximo); 
}
void loop()
{
  
}