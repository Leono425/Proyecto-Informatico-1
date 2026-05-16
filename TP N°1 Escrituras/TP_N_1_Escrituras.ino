#define R1 11
#define G1 10
#define R2 8
#define G2 9
#define B2 7
#define R3 4
#define G3 5
#define B3 3
#define Buzz 6


void setup()
{
  pinMode(R1, OUTPUT);
  
  
  pinMode(R2, OUTPUT);
  pinMode(G2, OUTPUT);
  pinMode(B2, OUTPUT);
  pinMode(B2, OUTPUT);
  pinMode(R3, OUTPUT);
  pinMode(G3, OUTPUT);
  pinMode(B3, OUTPUT);
  pinMode(Buzz, OUTPUT);
}

void loop()
{
  digitalWrite(Buzz, 255);
  delay(100);
  digitalWrite(Buzz, 0);
  analogWrite(G3, 0);
  analogWrite(B3, 0);
  analogWrite(R1, 255);
  delay(400);

  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
  analogWrite(R1, 255);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
  analogWrite(R1, 255);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
  analogWrite(R1, 255);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
  
    digitalWrite(Buzz, 255);
  delay(100);
  digitalWrite(Buzz, 0);
  
  digitalWrite(R2, 1);
  digitalWrite(B2, 1);
  

  delay(400);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  digitalWrite(B2, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
  analogWrite(R1, 255);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
  analogWrite(R1, 255);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
  analogWrite(R1, 255);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
  
    digitalWrite(Buzz, 255);
  delay(100);
  digitalWrite(Buzz, 0);
  
  digitalWrite(B2, 0); 
  analogWrite(B3, 50);
  analogWrite(G3, 50);
  

  delay(400);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  analogWrite(B3, 0);
  delay(100);
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
  analogWrite(R1, 255);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
  analogWrite(R1, 255);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
  analogWrite(R1, 255);
  analogWrite(G1, 95);
  analogWrite(G2, 95);
  digitalWrite(R2, 1);
  analogWrite(G3, 95);
  digitalWrite(R3, 1);
  delay(100);
  analogWrite(R1, 0);
  analogWrite(G1, 0);
  analogWrite(G2, 0);
  digitalWrite(R2, 0);
  analogWrite(G3, 0);
  digitalWrite(R3, 0);
  delay(100);
}