// LED Dimmer: Reads an input voltage on pin 2
// and uses it to set the brightness of an LED on pin 0

// IMPORTANT:
// A1 = pin 2
// A3 = pin 3
// A4 = pin 4

int analogPin = A1;
int ledPin = 0;
int val = 0;

void setup()
{
   pinMode(analogPin, INPUT);
   pinMode(ledPin, OUTPUT);
}

void loop()
{
  val = map(analogRead(analogPin),0, 1023, 0, 255);
  analogWrite(ledPin, val);
  delay(50);
}

