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

void blue_grid10()
{
  startLineFollow();

  linefollowUntil(4);
  delay(500);

  leftTurnEncoder(80, 255);
  
  delay(500);
  linefollowUntil(1);
  delay(500);
  linefollowEncoder(70);
  delay(500);
  linefollowUntil(1);
  delay(500);
  right90(80);
  delay(500);
  linefollowEncoder(60);
  delay(500);
  linefollowUntil(2);
  delay(500);
  leftTurnEncoder(80, 255);
  delay(500);
  linefollowEncoder(250);
  delay(500);

  linefollowUntil(2);
  delay(500);

 
  leftTurnEncoder(80, 255);
  delay(500);

  linefollowEncoder(420);
  delay(500);

  linefollowUntil(1);
  delay(500);

  right90(80);
  delay(500);
  linefollowEncoder(80);
  delay(300);
  linefollowUntil(1);
  delay(500);

  leftTurnEncoder(80, 255);
  delay(500);
  linefollowEncoder(120);
  delay(500);

finalDestination();




}