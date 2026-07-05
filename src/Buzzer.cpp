#include "Buzzer.h"

Buzzer::Buzzer(int pin) : _pin(pin) {}

void Buzzer::begin() {
  pinMode(_pin, OUTPUT);
}

void Buzzer::bark() {
  for (int i = 0; i < 2; i++) {
    tone(_pin, 200); delay(80);   // low "woof"
    tone(_pin, 600); delay(120);  // mid bark
    tone(_pin, 900); delay(100);  // high peak
    noTone(_pin);    delay(60);
  }
  delay(200);
}
