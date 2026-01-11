#include "MY_LED.h"  // 確保這裡的大小寫與檔案名稱 MY_LED.h 完全相同

void led_turn(int ledPin) {
    digitalWrite(ledPin, HIGH);
}