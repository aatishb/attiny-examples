/* TinyTone for ATtiny85 */

// Notes
const int Note_C = 239;
const int Note_CS = 225;
const int Note_D = 213;
const int Note_DS = 201;
const int Note_E = 190;
const int Note_F = 179;
const int Note_FS = 169;
const int Note_G = 159;
const int Note_GS = 150;
const int Note_A = 142;
const int Note_AS = 134;
const int Note_B = 127;
const int Note_S = 255;

int Speaker = 1;

void setup()
{
pinMode(Speaker, OUTPUT);
}

void loop()
{
playTune();
delay(100);
}

void TinyTone(unsigned char divisor, unsigned char octave, unsigned long duration)
{
TCCR1 = 0x90 | (8-octave); // for 1MHz clock
//TCCR1 = 0x90 | (11-octave); // for 8MHz clock
OCR1C = divisor-1; // set the OCR
delay(duration);
TCCR1 = 0x90; // stop the counter
}

// Play La Cucaracha
void playTune(void)
{
TinyTone(Note_C, 4, 200);
TinyTone(Note_S, 1, 10); 
TinyTone(Note_C, 4, 200);
TinyTone(Note_S, 1, 10); 
TinyTone(Note_C, 4, 200);
TinyTone(Note_S, 1, 10); 
TinyTone(Note_F, 4, 600);
TinyTone(Note_S, 1, 10); 
TinyTone(Note_A, 4, 600);
TinyTone(Note_S, 1, 10); 
TinyTone(Note_C, 4, 200);
TinyTone(Note_S, 1, 10); 
TinyTone(Note_C, 4, 200);
TinyTone(Note_S, 1, 10); 
TinyTone(Note_C, 4, 200);
TinyTone(Note_S, 1, 10); 
TinyTone(Note_F, 4, 600);
TinyTone(Note_S, 1, 10); 
TinyTone(Note_A, 4, 800);
TinyTone(Note_S, 1, 20); 
TinyTone(Note_F, 4, 200);
TinyTone(Note_S, 1, 10); 
TinyTone(Note_F, 4, 200);
TinyTone(Note_S, 1, 10);
TinyTone(Note_E, 4, 200);
TinyTone(Note_S, 1, 10);
TinyTone(Note_E, 4, 200);
TinyTone(Note_S, 1, 10);
TinyTone(Note_D, 4, 200);
TinyTone(Note_S, 1, 10);
TinyTone(Note_D, 4, 200);
TinyTone(Note_S, 1, 10);
TinyTone(Note_C, 4, 1000);
}
