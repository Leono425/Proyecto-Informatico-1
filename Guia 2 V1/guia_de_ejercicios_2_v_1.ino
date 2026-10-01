
int numeros[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

int suma = 0;

int media = 0;
  
void setup()
{
  Serial.begin(9600);
  for (int i = 0; i < 10; i++) {
     suma += numeros[i];}
   
   media = suma / 10;
   Serial.print("La media del vector es: ");
   Serial.println(media);
}

void loop()
{
  
}
