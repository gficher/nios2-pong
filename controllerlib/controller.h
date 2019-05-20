#ifndef _CONTROLLERLIB_
#define _CONTROLLERLIB_


short int getSwitchValue(short int); // return the n-th switch value (0 or 1)

short int getButtonValue(short int); // return the n-th button balue (0 or 1)

void setGreenLed(short int, short int); // set the on-off state of the n-th green led
void setRedLed(short int, short int); // set the on-off state of the n-th red led

void setSegDisplay(short int, char); // set the displayed digit of the n-th 7-segment display

void printLCD(char*); // prints the char buffer to the lcd screen. CAUTION: mind the line breaks and screen boundaries!
void moveLCDCursor(short int, short int); // set the x and y position o the LCD cursor.


#endif