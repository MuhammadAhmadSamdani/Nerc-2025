#include <Arduino.h>
#include "ServoControl.h"
#include "LineFollow.h"
#include "EncoderControl.h"
#include "Blue/BlueGrid10.h"

/*
 * Grid 10
 *
 *  grid is 3x3 the points are (1,2), (2,2) and (2,1)
 */

 void blue_grid11()
 {
    startLineFollow();

    linefollowUntil(6);
    delay(500);
    leftTurnEncoder(80, 255);
    delay(500);
    linefollowEncoder(70);
    delay(500);
    linefollowUntil(2);
    delay(500);
    linefollowEncoder(70);
    delay(500);
    linefollowUntil(1);
    delay(500);


    leftTurnEncoder(80, 255);
    delay(500);

    linefollowEncoder(70);
    delay(200);
    linefollowUntil(2);
    delay(500);

    leftTurnEncoder(80, 255);
    delay(500);

    linefollowEncoder(140);
    delay(500);
   
    backLinefollowUntil(2);
    delay(500);

    right90(80);
    delay(500);
    linefollowEncoder(150);
    delay(500);

    finalDestination();

 }