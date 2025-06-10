#include <Arduino.h>
#include "ServoControl.h"
#include "LineFollow.h"
#include "EncoderControl.h"
#include "Blue/BlueGrid15.h"


void blue_grid15()
{
    
    startLineFollow();

    linefollowUntil(6);
    delay(500);
    leftTurnEncoder(80, 255);
    delay(500);

    linefollowUntil(2);
    delay(500);
    linefollowEncoder(8);
    delay(500);
    linefollowUntil(1);
    delay(500);

    leftTurnEncoder(80, 255);
    delay(500);
    linefollowEncoder(80);  
    delay(500);
    linefollowUntil(2);
    delay(500);
    
    
    right90(80);
    delay(500);
    linefollowEncoder(80);
    delay(500);
    linefollowUntil(2);
    delay(500);
    leftTurnEncoder(80, 255);
    delay(500);

    linefollowEncoder(150);

    finalDestination();

    
}