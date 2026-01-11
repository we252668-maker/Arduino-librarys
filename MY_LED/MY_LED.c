#include "MY_LED.h"  // 確保這裡的大小寫與檔案名稱 MY_LED.h 完全相同

void led_turnOn(int ledPin) {
    digitalWrite(ledPin, HIGH);
}

void led_turnOff(int ledPin) {
    digitalWrite(ledPin, LOW);
}