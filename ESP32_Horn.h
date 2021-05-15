/*
  ESP32_Horn.h - Library for esp32 RC Cars.
  Created by B. Schäfer, 14.05.2021.
  Released into the public domain.
*/
#ifndef ESP32_Horn_h
#define ESP32_Horn_h

#include "Arduino.h"

class Horn
{
  public:
    Horn(int pin, int channel);
    void honk();
    void laCuCaRacha();
    void generalLee();
  private:
    int _pin;   
    int _channel;
    int _c1;
    int _d1;
    int _e1;
    int _f1;
    int _g1;
    int _a1;
    int _b1;
    int _c2;
    int _d2;
    int _e2;
    int _f2;
    int _g2;
    int _a2;   
}

#endif
