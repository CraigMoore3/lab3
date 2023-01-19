#include <Arduino.h>

// Defines variables for pins used

// Output
int ledPin = 5;

// Button A - Turns LED on
int buttonApin = 9;

// Button B - Turns LED off
int buttonBpin = 8;

void setup()
{
  pinMode(ledPin, OUTPUT);

  // pressing button pulls LOW
  // if nothing is connected to INPUT, it will be 'pulled up' to HIGH
  // it is HIGH unless the button is pressed
  pinMode(buttonApin, INPUT_PULLUP);
  pinMode(buttonBpin, INPUT_PULLUP);
}

void loop()
{
  // Checks to see if Button A (LED ON) is pressed
  if (digitalRead(buttonApin) == LOW)
  {
    // if Button A is pressed, pull LED HIGH
    digitalWrite(ledPin, HIGH);
  }

// Checks to see if Button B (LED OFF) is pressed
  if (digitalRead(buttonBpin) == LOW)
  {
    // if Button B is pressed, pull LED Low
    digitalWrite(ledPin, LOW);
  }
}