/*
  DeciVolts.ino - Example for the Serial7 library.
  Created by Josh Villbrandt (http://javconcepts.com/), February 13, 2012.
  Released into the public domain.
*/

#include <Serial7.h>

Serial7 serial7(Serial);

void setup() {
  Serial.begin(9600);
  serial7.reset();
  serial7.brightness(0);
}

void loop() {
  int counts = analogRead(A0);
  float volts = (float)counts/1023 * 5 * 10; // dV (decivolts)
  serial7.print(volts);
  delay(100);
}
