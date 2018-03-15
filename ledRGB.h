/*
Project: ledRGB
File: ledRGB.h
Version: 0.2
Create by: Rom1 <rom1@canel.ch>
		   CANEL - https://www.canel.ch
Date: 15/03/18
License: GNU GENERAL PUBLIC LICENSE v3
Language: Arduino (C/C++)
Description: Bibliotèque Arduino pour contrôler une LED RGB en digital
*/
#ifndef LED_H
#define LED_H

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
