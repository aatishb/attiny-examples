// Blinks an LED connected to pin 0

int blinkPin = 0;

void setup()
{
   pinMode(blinkPin, OUTPUT);
}

void loop()
{
    digitalWrite(blinkPin, HIGH);
    delay(100);
    digitalWrite(blinkPin, LOW);
    delay(100);
}

