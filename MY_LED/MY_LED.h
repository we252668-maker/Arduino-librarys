#ifndef MY_LED_H
#define MY_LED_H

#include <Arduino.h> // 包含 Arduino 核心 API

#ifdef __cplusplus
extern "C" {
#endif

void led_turnOn(int ledPin);
void led_turnOff(int ledPin);
#ifdef __cplusplus
}
#endif

#endif