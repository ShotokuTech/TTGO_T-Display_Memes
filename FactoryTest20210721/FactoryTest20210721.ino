#include <TFT_eSPI.h>
#include <SPI.h>
#include "jpeg1.h"
#include "jpeg2.h"
#include "jpeg3.h"
#include "jpeg4.h"
#include "jpeg5.h"

TFT_eSPI tft = TFT_eSPI(135, 240); // Invoke custom library

void setup(){
    Serial.begin(115200);
    Serial.println("Start");
    tft.init();
    tft.setRotation(1);
    tft.setSwapBytes(true);
}

void loop(){
    tft.pushImage(0, 0,  240, 135, jpeg1);
    delay(150);  
    tft.pushImage(0, 0,  240, 135, jpeg2);
    delay(150);  
    tft.pushImage(0, 0,  240, 135, jpeg3);
    delay(150);  
    tft.pushImage(0, 0,  240, 135, jpeg4);
    delay(150);
    tft.pushImage(0, 0,  240, 135, jpeg5);
    delay(150);
}
