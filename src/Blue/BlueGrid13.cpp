#include <Arduino.h>
#include "ServoControl.h"
#include "LineFollow.h"
#include "EncoderControl.h"
#include "Blue/BlueGrid13.h"


void blue_grid13()
{
    startLineFollow();
    
    linefollowUntil(4);
    delay(500);
    leftTurnEncoder(80, 255);
    delay(500);

    linefollowEncoder(70);
    delay(500);
    linefollowUntil(1);
    delay(500);

    right90(80);
    delay(500);
    linefollowEncoder(450);
    delay(500);
    linefollowUntil(1);
    delay(500);

    leftTurnEncoder(80, 255);
    delay(500);
    linefollowUntil(2);
    delay(500);
    linefollowEncoder(70);
    delay(500);
    linefollowUntil(2);
    delay(500);

    leftTurnEncoder(80, 255);
    delay(500);
    linefollowUntil(3);
    delay(500);
    linefollowEncoder(150);
    delay(100);

    
    finalDestination();




    
}