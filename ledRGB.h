/*
Project: ledRGB
File: ledRGB.h
Version: 0.1
Create by: Rom1 <rom1@canel.ch>
		   CANEL - https://www.canel.ch
Date: 24/02/18
License: GNU GENERAL PUBLIC LICENSE v3
Language: Python
Description: Bibliotèque Arduino pour contrôler une LED RGB en digital
*/
#ifndef LED_H
#define LED_H

#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif


#define BLACK 0
#define WHITE 1
#define RED 2
#define GREEN 3
#define BLUE 4
#define YELLOW 5

class LedRGB
{
  public:
    LedRGB(int array[3]);
    void setLED(int array[3]);
    void setColorsValues(int array[3]);
    void setColor(int color);
    void handleLED(void);
  private:
    void cpyary(int array1[], int array2[]);
};

#endif


// vim: ft=arduino tw=100 et ts=2 sw=2
