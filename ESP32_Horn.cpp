/*
  ESP32_Horn.cpp - Library for esp32 RC Cars.
  Created by B. Schäfer, 14.05.2021.
  Released into the public domain.
*/

#include "Arduino.h"
#include "ESP32_Horn.h"

Horn::Horn(int pin, int channel)
{
  _pin = pin;
  _channel = channel;
  _ c1 = 262;
  _d1 = 294;
  _e1 = 330;
  _f1 = 349;
  _g1 = 392;
  _a1 = 440;
  _b1 = 494;
  _c2 = 523;
  _d2 = 587;
  _e2 = 659;
  _f2 = 699;
  _g2 = 784;
  _a2 = 880;   
}

void Horn::noTone() {
  newTone(0);
}


void Horn::newTone(byte pin, int freq) {
  ledcSetup(_channel, 2000, 8); // setup beeper
  ledcAttachPin(_pin, _channel); // attach beeper
  ledcWriteTone(_channel, freq); // play tone
}


void Horn::generalLee() {
  newTone(_g1);
  delay(200);
  noTone();

  newTone(_e1);
  delay(250);
  noTone();

  newTone(_c1);
  delay(250);
  noTone();

  newTone(_c1);
  delay(250);
  noTone();

  newTone(_c1);
  delay(200);
  noTone();

  newTone(_d1);
  delay(200);
  noTone();

  newTone(_e1);
  delay(200);
  noTone();

  newTone(_f1);
  delay(200);
  noTone();

  newTone(_g1);
  delay(275);
  noTone();

  newTone(_g1);
  delay(275);
  noTone();

  newTone(_g1);
  delay(275);
  noTone();

  newTone(_e1);
  delay(200);
  noTone();
}

void Horn::laCucaracha() {
  newTone(_g1);
  delay(250);
  noTone();

  newTone(_g1);
  delay(250);
  noTone();

  newTone(_g1);
  delay(250);
  noTone();

  newTone(_c2);
  delay(750);
  noTone();

  newTone(_e2);
  delay(500);
  noTone();

  newTone(_g1);
  delay(250);
  noTone();

  newTone(_g1);
  delay(250);
  noTone();

  newTone(_g1);
  delay(250);
  noTone();

  newTone(_c2);
  delay(750);
  noTone();

  newTone(_e2);
  delay(500);
  noTone();

  delay(100);

  newTone(_c2);
  delay(500);
  noTone();

  newTone(_c2);
  delay(250);
  noTone();

  newTone(_b1);
  delay(250);
  noTone();

  newTone(_b1);
  delay(250);
  noTone();

  newTone(_a1);
  delay(250);
  noTone();

  newTone(_a1);
  delay(250);
  noTone();

  newTone(_g1);
  delay(600);
  noTone();

}
