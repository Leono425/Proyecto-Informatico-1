#define buzz 9

#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_D5  587
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_G5  784

#define REST 0

#define TEMPO 110

const int notas[] = {NOTE_C4,NOTE_E4,NOTE_G4,NOTE_E4,NOTE_F4,NOTE_A4,NOTE_G4,NOTE_E4,NOTE_D4,NOTE_F4,NOTE_A4,NOTE_F4,NOTE_E4,NOTE_G4,NOTE_C5,NOTE_B4,NOTE_A4,NOTE_G4,NOTE_E4,NOTE_G4,NOTE_A4,NOTE_C5,NOTE_D5,NOTE_C5,NOTE_B4,NOTE_G4,NOTE_E4,NOTE_D4,NOTE_C4,NOTE_E4,NOTE_G4,NOTE_A4,NOTE_G4,NOTE_E4,NOTE_D4,NOTE_C4};

const int figuras[] = {8,8,8,8,8,8,8,8,8,8,8,8,8,8,4,8,8,8,8,8,8,8,4,8,8,8,8,8,4,8,8,8,8,8,8,4};

int cuadritosToDuration(int cuadritos)
{
  int duracionRedonda = (60000 * 4) / TEMPO;
  int duracion = (duracionRedonda * cuadritos) / 32;

  return duracion;
}

void playNote(int note, int duration)
{
  if(note == 0)
  {
    noTone(buzz);
    delay(duration);
  }
  else
  {
    tone(buzz, note, duration * 0.9);
    delay(duration);
    noTone(buzz);
  }
}

void playMelody(const int notes[], const int figures[], int length)
{
  for(int i = 0; i < length; i++)
  {
    int duration = cuadritosToDuration(figures[i]);
    playNote(notes[i], duration);
  }
}

void pauseBetweenLoops(int seconds)
{
  noTone(buzz);
  delay(seconds * 1000);
}

void setup()
{
  pinMode(buzz, OUTPUT);
}

void loop()
{
  playMelody(notas, figuras, 36);

  pauseBetweenLoops(3);
}