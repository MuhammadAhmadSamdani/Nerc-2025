#include <Arduino.h>
#include "ServoControl.h"
#include "LineFollow.h"
#include "EncoderControl.h"
#include "Blue/BlueGrid4.h"

/*
 * Grid 4 according to the Red Arena
 *
 *  grid is 3x3 the points are (1,2), (2,2) and (2,1)
 */

void blue_grid4()
{
   //------------------ Starting Point -------------------
  linefollowFiveUntil(4);
  delay(500);
  leftTurnEncoder(80, 255);
  delay(500);
  
  // move forward for 6 strip
  linefollowUntil(6);
  delay(500);

  leftTurnEncoder(80, 255);
  delay(500);

  // Pick 1 Fruit
  linefollowFiveUntil(2);
  delay(500);
  linefollowEncoder(60);
  delay(500);
  linefollowUntil(1);
  delay(500);

  // Pick 2nd Fruit
  left90(80);
  delay(500);
  linefollowEncoder(60);
  delay(500);
  linefollowUntil(1);
  delay(500);

  // Move to pick 3rd Fruit
  right90(80);
  delay(500);
  backLinefollowEncoder(50);
  delay(500);
  linefollowUntil(1);
  delay(500);
  linefollowEncoder(70);
  delay(500);
  linefollowUntil(2);
  delay(500);

  // // Move to drop red box
  leftTurnEncoder(80, 255);
  delay(500);
  linefollowUntil(2);
  delay(500);
  linefollowEncoder(120);
  delay(200);

  // // Move back to drop blue box
  backLinefollowUntil(5);
  delay(500);
  backLinefollowEncoder(100);
  delay(500);
  linefollowEncoder(100);
  delay(500);

  // // Backward to pick strip
  left90(80);
  delay(500);

  // // After picking the strip, move forward 5 strips to drop the 3 box
  linefollowUntil(5);
  delay(500);
  leftTurnEncoder(80, 255);
  delay(500);
  linefollowEncoder(100);
  delay(500);
  backLinefollowUntil(2);
  delay(500);
  

  // // Move to Parking
  right90(160);
  delay(500);
 
  linefollowEncoder(500);
}
