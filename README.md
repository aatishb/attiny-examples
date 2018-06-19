# Get started programming the ATTiny

A few example sketches to program the ATTiny85 using the Arduino software. The ATTiny is a tiny programmable microcontroller that costs < $1. It works great as a low-cost, smaller and less powerful alternative to an Arduino.

# Hardware

- ATTiny85 or [LilyTwinkle](https://www.sparkfun.com/products/11364)
- [Tiny AVR Programmer](https://www.sparkfun.com/products/11801) and USB extension cable
- TM1637 4-digit LED display (we use these for reading voltages, etc. as the ATTiny doesn't easily support serial communication)

If using LilyTwinkle or SOIC footprint ATTiny:
- IC Test Clip - SOIC 8-pin
- Male to Female Jumper wires

# Setup

1. Use [this guide](http://highlowtech.org/?p=1695) to install ATtiny drivers for the Arduino IDE. Under the tools menu in the Arduino IDE, we have the Board set to "ATtiny 25/45/85", the Processor set to "ATtiny85" and the Clock to "Internal 8 Mhz".

2. Follow [these instuctions](https://learn.sparkfun.com/tutorials/re-programming-the-lilytiny--lilytwinkle) to connect the ATtiny using the tiny AVR programmer. Under the Tools menu in the Arduino IDE, we have the Programmer set to "USBtinyISP".

If you aren't using the LilyTwinkle and have a DIP footprint ATTiny, you can just plug it in to the socket on the Tiny AVR programmer to program it.

3. Download this repo (green button on the top right), open the examples in your Arduino IDE, and upload to test. You'll also need to build the corresponding circuit.

4. For the clock sketches that use the TM1637 LED display, you'll also need to install the library. In the Arduino IDE, go to Sketch > Include Libraries > Manage Libraries and search for 1637. You should find the Grove 4-Digit Display library by Seeed Studio. Click install.
# Contributors
Built by [Aatish Bhatia](https://github.com/aatishb) and [Sharon De La Cruz](https://github.com/unoseistres) at Princeton University's [Council on Science and Technology](http://cst.princeton.edu).
