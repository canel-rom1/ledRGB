/*
Project: ledRGB
File: ledRGB.cpp
Version: 0.1
Create by: Rom1 <rom1@canel.ch>
		   CANEL - https://www.canel.ch
Date: 24/02/18
License: GNU GENERAL PUBLIC LICENSE v3
Language: Python
Description: Bibliotèque Arduino pour contrôler une LED RGB en digital
*/
#if defined(ARDUINO) && ARDUINO >= 100
  #include <Arduino.h>
#else
  #include <WProgram.h>
#endif

#include "ledRGB.h"

int ledArray[3], mainArray[3] = {0, 0, 0};

// Color arrays      R    G    B
int black[3]    = {   0,   0,   0 };
int white[3]    = { 100, 100, 100 };
int red[3]      = { 100,   0,   0 };
int green[3]    = {   0, 100,   0 };
int blue[3]     = {   0,   0, 100 };
int yellow[3]   = {  95,  40,   0 };
int dimWhite[3] = {  30,  30,  30 };


LedRGB::LedRGB(int array[3])
{
  for(int i=0 ; i<3 ; i++)
  {
    ledArray[i] = array[i];
    pinMode(ledArray[i],  OUTPUT);
  }
}

void LedRGB::setLED(int array[3])
{
  for(int i=0 ; i<3 ; i++)
    if(array[i] != 0)
      digitalWrite(ledArray[i], HIGH);
    else
      digitalWrite(ledArray[i], LOW);
}

void LedRGB::setColorsValues(int array[3])
{
  LedRGB::cpyary(mainArray, array);
}

void LedRGB::setColor(int color)
{
  switch(color)
  {
    case BLACK:
      LedRGB::cpyary(mainArray, black);
      break;
    case WHITE:
      LedRGB::cpyary(mainArray, white);
      break;
    case RED:
      LedRGB::cpyary(mainArray, red);
      break;
    case GREEN:
      LedRGB::cpyary(mainArray, green);
      break;
    case BLUE:
      LedRGB::cpyary(mainArray, blue);
      break;
    case YELLOW:
      LedRGB::cpyary(mainArray, yellow);
      break;
    default:
      LedRGB::cpyary(mainArray, black);
      break;
  }
}

void LedRGB::handleLED()
{
  for(int i=0 ; i<=100 ; i++)
    for(int nled=0 ; nled<3 ; nled++)
      if(i < mainArray[nled])
        digitalWrite(ledArray[nled], HIGH);
      else
        digitalWrite(ledArray[nled], LOW);
}

void LedRGB::cpyary(int array1[], int array2[])
{
  for(int i=0 ; i<3 ; i++)
    array1[i] = array2[i];
}


// vim: ft=arduino tw=100 et ts=2 sw=2
