int pinesSalida[] = {2, 3, 4};
int pinesEntrada[] = {5, 6};

void setup()
{
  Serial.begin(9600);
  configurarPines(pinesSalida, 2, OUTPUT);
  configurarPines(pinesEntrada, 1, INPUT);
  Serial.println("Todos los pines configurados correctamente");
}
void loop() 
{

}

void configurarPines(int pines[], int tamano, uint8_t modo) 
{
  for (int i = 0; i < tamano; i++) 
  {
    pinMode(pines[i], modo);
  }
}