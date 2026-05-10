#define POT A0
#define LED 3
void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(POT, INPUT);
}

void loop()
{
  int tiempo = analogRead(POT);
  int tiemponuevo = map(tiempo, 0, 1023, 0, 10000);
  analogWrite(LED, 255);
  delay(tiemponuevo);
  analogWrite(LED, 0);
  delay(tiemponuevo);
}