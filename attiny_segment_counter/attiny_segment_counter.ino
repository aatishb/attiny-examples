// Counts upwards from zero on a TM1637 LCD segment display

#include "TM1637.h"
#define CLK 4//pins definitions for TM1637 and can be changed to other ports
#define DIO 3

TM1637 tm1637(CLK,DIO);

int count = 0;

void setup()
{
  tm1637.init();
  tm1637.set(BRIGHT_TYPICAL);//BRIGHT_TYPICAL = 2,BRIGHT_DARKEST = 0,BRIGHTEST = 7;
}

void loop()
{

  // reset count
  if(count > 9999){
    count = 0;
  }

  tm1637.display(3, count % 10);
  tm1637.display(2, (count / 10) % 10);
  tm1637.display(1, (count / 100) % 10);
  tm1637.display(0, (count / 1000) % 10);
  delay(3);


  count++;

}
