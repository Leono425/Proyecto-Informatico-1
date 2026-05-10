#define POT A0
#define BUZ 3
void setup()
{
  pinMode(BUZ, OUTPUT);
  pinMode(POT, INPUT);
}

void loop()
{
  int volumen = analogRead(POT);
  int volumennuevo = map(volumen, 0, 1023, 0, 255);
  analogWrite(BUZ, volumennuevo);
}