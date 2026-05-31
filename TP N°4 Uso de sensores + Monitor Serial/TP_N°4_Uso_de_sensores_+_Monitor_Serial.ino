#define LEDR 3
#define LEDG 6
#define LEDB 5
#define TMP A0
#define LDR A1

void setup()
{
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(LEDB, OUTPUT);
  pinMode(TMP, INPUT);
  pinMode(LDR, INPUT); 
  Serial.begin(9600);
}

void loop()
{
  float temperatura = (analogRead(TMP)*5.0/1024)*100-50;
  int Luz = analogRead ( LDR);
  int nuevaluz = map(Luz, 1 , 310 , 100 , 0 );
  Serial.print("La temperatura actual:");
  Serial.print(temperatura);
  Serial.println("c");
  Serial.print("El nivel de luz actual es: " );
  Serial.println(nuevaluz);
  
  if (nuevaluz >= 30 & nuevaluz <= 70)
  {  
    if (temperatura >= 90 )
    {
      analogWrite(LEDR, 255);
      analogWrite(LEDB, 0);
      analogWrite(LEDG, 0);
    }
    if (temperatura <= 18)
    {
      analogWrite(LEDB, 255);
      analogWrite(LEDR, 0);
      analogWrite(LEDG, 0);
    }
    if (temperatura > 18 & temperatura < 90)
    {
      analogWrite(LEDG, 255);
      analogWrite(LEDB, 0);
      analogWrite(LEDR, 0);
    }
  }
  else
  {
    analogWrite(LEDG, 0);
    analogWrite(LEDB, 0);
    analogWrite(LEDR, 0);
  }
}