#include <Arduino.h>
#include "ServoControl.h"
#include "LineFollow.h"
#include "EncoderControl.h"
#include "Blue/BlueGrid16.h"


void blue_grid16()
{
    
    startLineFollow();

    linefollowUntil(3);
    delay(1000);
    leftTurnEncoder(80, 255);
    delay(500);
    linefollowFiveUntil(2);
    delay(500);
    rightTurnEncoder(80, 255);
    delay(500);
    linefollowEncoder(460);
    
    // linefollowFiveUntil(1);
    // delay(500);
    // linefollowEncoder(80);
    // delay(500);
    linefollowUntil(2);
    delay(500);
    leftTurnEncoder(80, 255);
    delay(500);
    linefollowUntil(2);
    delay(500);
    linefollowEncoder(80);
    delay(500);
    linefollowUntil(1);
    delay(500);


    leftTurnEncoder(80, 255);
    delay(500);
    linefollowEncoder(470);
    delay(500);
    linefollowUntil(1);
    delay(500);
    right90(80);
    delay(500);
    

    linefollowEncoder(80);
    linefollowUntil(1);
    delay(500);


    leftTurnEncoder(80, 255);
    delay(500);

    linefollowEncoder(100);
   

    finalDestination();
}