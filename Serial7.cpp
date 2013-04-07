/*
  Serial7.cpp - Library for the SparkFun 7-segment serial displays.
  Created by Josh Villbrandt (http://javconcepts.com/), February 13, 2012.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Serial7.h"

Serial7::Serial7(Print &print)
{
  printer = &print;
}

void Serial7::reset()
{
  printer->write(0x76);
}

void Serial7::brightness(byte b)
{
  printer->write(0x7A);
  printer->write(b);
}

void Serial7::print(float value)
{
  digitalWrite(13, HIGH);
  int output = 0;
  
  // decimal point control character
  printer->write(0x77);
  
  // switch depending on value
  if(value < 10) {
    printer->write(0x01);
    output = value*1000;
  }
  else if(value < 100) {
    printer->write(0x02);
    output = value*100;
  }
  else if(value < 100) {
    printer->write(0x04);
    output = value*10;
  }
  else {
    printer->write(0x08);
	output = value;
  }
  
  // output four least significant bits
  printer->print(output/1000 % 10, HEX);
  printer->print(output/100 % 10, HEX);
  printer->print(output/10 % 10, HEX);
  printer->print(output % 10, HEX);
}