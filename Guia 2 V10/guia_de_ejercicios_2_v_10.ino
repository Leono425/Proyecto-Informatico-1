int vector[10];
#define BUZZ 6
int random1;

void setup() 
{
  pinMode(BUZZ, OUTPUT);
  randomSeed(analogRead(A0));
  Serial.begin(9600);
  
    for (int i = 0; i < 10; i++)
  {
    random1 = random(1,11);
    vector[i] = random1;
  }
  Serial.println("");
  for (int i = 0; i < 10; i++)
  {
    Serial.print(" ");
    Serial.print(vector[i]);
    if(vector[i] == 5)
    {
      analogWrite(BUZZ, 5);
    }
  }
}
void loop()
{

}