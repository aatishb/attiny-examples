# Get started programming the ATTiny

A few example sketches to program the ATTiny85 using the Arduino software. The ATTiny is a tiny programmable microcontroller that costs < $1. It works great as a low-cost, smaller and less powerful alternative to an Arduino.

# Hardware

- [LilyTwinkle](https://www.sparkfun.com/products/11364) or ATTiny85
- [Tiny AVR Programmer](https://www.sparkfun.com/products/11801) and USB extension cable
- TM1637 4-digit LED display (we use these for reading voltages as the ATTiny doesn't support serial communication)

If using LilyTwinkle or SOIC footprint ATTiny:
- IC Test Clip - SOIC 8-pin
- Male to Female Jumper wires

# Setup

1. Use [this guide](http://highlowtech.org/?p=1695) to install ATtiny drivers for the Arduino IDE. Under the tools menu in the Arduino IDE, set the Board to "ATtiny 25/45/85", the Processor to "ATtiny85", the Clock to "Internal 8 Mhz", and the Programmer to "USBtinyISP".

2. Follow [these instuctions](https://learn.sparkfun.com/tutorials/re-programming-the-lilytiny--lilytwinkle) to connect the ATtiny using the tiny AVR programmer. If you aren't using the LilyTwinkle and have a standalone ATTiny (DIP footprint), plug it into the socket on the Tiny AVR programmer.

3. Open up these examples in your Arduino IDE. You'll need to assemble the corresponding circuit for each sketch.

4. To use the TM1637 LED display, you'll need to install a library. In the Arduino IDE, go to Sketch > Include Libraries > Manage Libraries and search for 1637. You should find the 'Grove 4-Digit Display' library by Seeed Studio. Click install.

# Contributors
Built by [Aatish Bhatia](https://github.com/aatishb) and [Sharon De La Cruz](https://github.com/unoseistres) at Princeton University's [Council on Science and Technology](http://cst.princeton.edu).

The [TinyTone](http://www.technoblogy.com/show?KVO) function for producing musical tones on the ATtiny85 was created by David Johson-Davies.

