#ifndef LED_h
  #define LED_h

  #if defined(ARDUINO) && ARDUINO >= 100
    #include "Arduino.h"
  #else
    #include "WProgram.h"
  #endif

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
