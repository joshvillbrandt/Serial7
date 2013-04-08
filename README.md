Serial7
=======

An Arduino library for the Sparkfun 7-Segment Serial Display. Created by Josh Villbrandt (http://javconcepts.com/), February 13, 2012. Released into the public domain.

# Installation

To install, unzip and place the 'Serial7' folder into your '\<sketchbook\>\libraries' directory. Then, restart the Arduino IDE and look for the library under "Sketch" -> "Import Library". You can also try the example under "File" -> "Examples".

# Usage

This library is designed to output an arbitrary number to the SparkFun 7-segement serial displays (https://github.com/sparkfun/Serial7SegmentDisplay.) The included example sketch 'DeciVolts' reads analog pin zero and outputs to the display in decivolts. (Using decivolts shows off the ability of the library to automatically shift the decimal point.) This example is best demonstrated by hooking up a potentiometer to analog pin zero. See the circuit at http://arduino.cc/en/Tutorial/AnalogReadSerial for more information on that.

Available functions include reset(), brightness(byte), and print(float). Call reset at the beginning of a program to clear the display and set the cursor to the first position. Call brightness(0) to set the display to full brightness or brightness(255) to set the display to the lowest brightness. Finally, call print() to display a number on the display.

Note that if the serial connection to the display is broken at anytime, the position of the cursor will probably be lost. One could call reset() before each print(), but this essentially reduces the brightness of the display.
