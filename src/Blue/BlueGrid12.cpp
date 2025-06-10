#include <Arduino.h>
#include "ServoControl.h"
#include "LineFollow.h"
#include "EncoderControl.h"
#include "Blue/BlueGrid12.h"

/*
 * Grid 10
 *
 *  grid is 3x3 the points are (3,3), (1,3) and (2,2)
 */

 void blue_grid12()
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
    linefollowEncoder(470);
    delay(500);
    linefollowUntil(1);
    delay(500);


    right90(80);
    delay(500);
    linefollowEncoder(470);
    delay(500);
    linefollowUntil(1);
    delay(500);
    leftTurnEncoder(80, 255);
    delay(500);
    linefollowUntil(2);
    delay(500);
    leftTurnEncoder(80, 255);
    delay(500);
    linefollowUntil(3);
    delay(500);
    linefollowEncoder(150);   
   
    finalDestination();

 }