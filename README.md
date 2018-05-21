# Get started programming the ATTiny

A few example sketches to program the ATTiny85 using the Arduino software. The ATTiny is a tiny programmable microcontroller that costs < $1. It works great as a low-cost, smaller and less powerful alternative to an Arduino.

We used the Tiny AVR programmer to program the ATTiny, following [these instuctions](https://learn.sparkfun.com/tutorials/re-programming-the-lilytiny--lilytwinkle). If you have a DIP footprint ATTiny (slightly larger with longer legs) instead of the smaller SOIC footprint, you can just plug it in to the socket on the Tiny AVR programmer instead of using the jumper cables & IC clip.

# Hardware

- ATTiny85 or [LilyTwinkle](https://www.sparkfun.com/products/11364)
- [Tiny AVR Programmer](https://www.sparkfun.com/products/11801) and USB extension cable
- TM1637 4-digit LED display (we use these for reading voltages, etc. as the ATTiny doesn't easily support serial communication)

If using LilyTwinkle or SOIC footprint ATTiny:
- IC Test Clip - SOIC 8-pin
- Male to Female Jumper wires

# Contributors
Built by [Aatish Bhatia](https://github.com/aatishb) and [Sharon De La Cruz](https://github.com/unoseistres) at Princeton University's [Council on Science and Technology](http://cst.princeton.edu).
