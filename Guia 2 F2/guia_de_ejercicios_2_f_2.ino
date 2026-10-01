#define ECHO 3
#define TRIG 4

void setup() 
{
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
}

void loop() 
{ 
  Serial.print("Dist:");
  Serial.println(distancia());
}

float distancia()
{
  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);   
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);       
  float tiempo = pulseIn( ECHO , HIGH );
  float dist = tiempo / 57.6;
}