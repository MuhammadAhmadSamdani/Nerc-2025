#include <Arduino.h>
#include "ServoControl.h"
#include "LineFollow.h"
#include "EncoderControl.h"
#include "Blue/BlueGrid8.h"

/*
 * Grid 5 according to the Red Arena
 *
 *  grid is 3x3 the points are (3,1), (2,2) and (3,3)
 */

void blue_grid8()
{
  startLineFollow();


  linefollowUntil(3);
  delay(500);
  leftTurnEncoder(80, 255);
  delay(500);
  linefollowEncoder(70);
  delay(500);
  linefollowUntil(1);
  delay(500);

  right90(80);
  delay(500);

  linefollowEncoder(80);
  delay(500);
  linefollowFiveUntil(2);
  delay(500);


  // pick 2 Fruit
  leftTurnEncoder(80,255);
  delay(500);
  linefollowEncoder(80);
  delay(500);
  linefollowFiveUntil(2);
  delay(500);


  // pick 3 Fruit
  leftTurnEncoder(80, 255);
  delay(500);
  linefollowEncoder(60);
  delay(500);
  linefollowFiveUntil(1);
  delay(500);




  right90(80);
  delay(500);
  linefollowEncoder(70);
  delay(500);
  linefollowUntil(1);
  delay(500);
  leftTurnEncoder(80, 255);
  delay(500);

  linefollowEncoder(120);
  delay(500);


  finalDestination();

}