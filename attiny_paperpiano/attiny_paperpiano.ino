// paper piano

// IMPORTANT:
// A1 = pin 2

#include "TM1637.h"
#define CLK 4//pins definitions for TM1637 and can be changed to other ports
#define DIO 3

TM1637 tm1637(CLK,DIO);

int voltageInPin = A1;    // input pin 2
int speakerPin = 1;    // output pin 1

int voltageReading = 0;
unsigned int voltageAverage = 0;   // variable to store the value coming from the sensor
unsigned int numSteps = 20;   // variable to store the value coming from the sensor

int offset = 2; // if key readings are very close together in value, decrease this to 3 or so

// Notes
const int Note_C  = 239;
const int Note_CS = 225;
const int Note_D  = 213;
const int Note_DS = 201;
const int Note_E  = 190;
const int Note_F  = 179;
const int Note_FS = 169;
const int Note_G  = 159;
const int Note_GS = 150;
const int Note_A  = 142;
const int Note_AS = 134;
const int Note_B  = 127;

float scale[] = {Note_C, Note_D, Note_E, Note_G, Note_A}; // array storing frequencies for pentatonic scale

// REPLACE with readings from the 5 keys
float keyReadings[] = {307, 302, 255, 279, 257};

void setup() {
  tm1637.init();
  tm1637.set(BRIGHT_TYPICAL); //BRIGHT_TYPICAL = 2,BRIGHT_DARKEST = 0,BRIGHTEST = 7;
  pinMode(voltageInPin, INPUT);
  pinMode(speakerPin, OUTPUT);
}

void loop() {

  voltageAverage = 0;
  
  // read the value from the sensor:
  for( int i=0; i<numSteps; i++){
    voltageReading = analogRead(voltageInPin);
    voltageAverage += voltageReading;
    delay(1);
  }
  voltageAverage = voltageAverage / numSteps;
  
  tm1637.display(3, voltageAverage % 10);
  tm1637.display(2, (voltageAverage / 10) % 10);
  tm1637.display(1, (voltageAverage / 100) % 10);
  tm1637.display(0, (voltageAverage / 1000) % 10);

  if(voltageAverage < 30){
    //TinyTone(Note_S, 1, 500); 
    delay(500);
  }
  else if(voltageAverage < keyReadings[4] + offset){
    TinyTone(scale[4], 4, 200); 
  }
  else if(voltageAverage < keyReadings[3] + offset){
    TinyTone(scale[3], 4, 200); 
  }
  else if(voltageAverage < keyReadings[2] + offset){
    TinyTone(scale[2], 4, 200); 
  }
  else if(voltageAverage < keyReadings[1] + offset){ 
    TinyTone(scale[1], 4, 200); 
  }
  else if(voltageAverage < keyReadings[0] + offset){
    TinyTone(scale[0], 4, 200); 
  }  else{
     //TinyTone(Note_S, 1, 500); 
     delay(200);
  }
  
}

void TinyTone(unsigned char divisor, unsigned char octave, unsigned long duration)
{
  //TCCR1 = 0x90 | (8-octave); // for 1MHz clock
  TCCR1 = 0x90 | (11-octave); // for 8MHz clock
  OCR1C = divisor-1; // set the OCR
  delay(duration);
  TCCR1 = 0x90; // stop the counter
}


