/*
  Serial7.h - Library for the SparkFun 7-segment serial displays.
  Created by Josh Villbrandt (http://javconcepts.com/), February 13, 2012.
  Released into the public domain.
*/

#ifndef Serial7_h
#define Serial7_h

#include "Arduino.h"

class Serial7
{
  public:
    Serial7(Print  &print);
	void reset();
    void brightness(byte b);
    void print(float value);
  private:
    Print * printer;
};

#endif