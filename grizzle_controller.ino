#include "src/commons.h"
#include "src/test1.h"

void setup() {

    for (auto i=2;i<6;i++) {
        pinMode(i, OUTPUT);
        digitalWrite(i, HIGH);
    }
    
    RLY1_ON

    delay(7000);

    RLY1_OFF
}

void loop() {
}
