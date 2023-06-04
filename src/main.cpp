#include <Arduino.h>


const int buttonPin = 0;
const int ledPin = 2;

int buttonState = 0;

void setup() {
  Serial.begin(115200);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
}

void loop() {
    buttonState = digitalRead(buttonPin);
    Serial.println(buttonState);
    if(buttonState == HIGH) {
      digitalWrite(ledPin, HIGH);
    }
    else 
    {
      digitalWrite(ledPin, LOW);
    }
}


