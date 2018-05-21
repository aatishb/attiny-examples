// Reads an input voltage on pin 2 and outputs the voltage
// on a TM1637 LCD segment display
// 0 = 0V, 1023 = 5V

// IMPORTANT:
// A1 = pin 2
// A3 = pin 3
// A4 = pin 4

#include "TM1637.h"
#define CLK 4//pins definitions for TM1637 and can be changed to other ports
#define DIO 3

TM1637 tm1637(CLK,DIO);

int voltageReading = 0;
int analogPin = A1;

void setup()
{
  tm1637.init();
  tm1637.set(BRIGHT_TYPICAL);//BRIGHT_TYPICAL = 2,BRIGHT_DARKEST = 0,BRIGHTEST = 7;

  pinMode(analogPin, INPUT);
}

void loop()
{

  voltageReading = analogRead(analogPin);

  tm1637.display(3, count % 10);
  tm1637.display(2, (count / 10) % 10);
  tm1637.display(1, (count / 100) % 10);
  tm1637.display(0, (count / 1000) % 10);

  delay(5);

}
