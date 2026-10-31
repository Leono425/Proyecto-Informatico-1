#define buzz 9

#define NOTE_C3  131
#define NOTE_D3  147
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392

#define REST 0

#define TEMPO 110

const int notas[] = {NOTE_C3,NOTE_G3,NOTE_C4,NOTE_G3,NOTE_F3,NOTE_C4,NOTE_F3,NOTE_C4,NOTE_D3,NOTE_A3,NOTE_D4,NOTE_A3,NOTE_E3,NOTE_B3,NOTE_E4,NOTE_B3,NOTE_C3,NOTE_G3,NOTE_C4,NOTE_G3,NOTE_F3,NOTE_C4,NOTE_F3,NOTE_C4,NOTE_D3,NOTE_A3,NOTE_D4,NOTE_A3,NOTE_E3,NOTE_B3,NOTE_E4,NOTE_B3,NOTE_C3,NOTE_G3,NOTE_C4,NOTE_C3};

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