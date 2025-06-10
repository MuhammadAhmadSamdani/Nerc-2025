#include <Arduino.h>
#include "ServoControl.h"
#include "LineFollow.h"
#include "EncoderControl.h"
#include "Blue/BlueGrid3.h"

/*
 * Grid 3 according to the Red Arena
 *
 *  grid is 3x3 the points are (2,3), (2,2) and (1,2)
 */

void blue_grid3()
{
   //------------------ Starting Point -------------------
  linefollowFiveUntil(4);
  delay(500);
  leftTurnEncoder(80, 255);
  delay(500);
  
  
  // move forward for 5 strip
  linefollowUntil(5);
  delay(500);

  // leftTurnEncoder(80, 245);
  leftTurnEncoder(87,255);
  delay(500);
  // backLinefollowEncoder(50);
  // delay(500);

  // Pick 1 Fruit
  linefollowEncoder(80);
  delay(500);
  linefollowUntil(1);
  delay(500);
  // Pick 2nd Fruit
  linefollowEncoder(60);
  delay(500);
  linefollowUntil(1);
  delay(500);

  // Move to pick 3rd Fruit
  right90(80);
  delay(500);
  linefollowEncoder(60);
  delay(500);
  linefollowUntil(1);
  delay(500);

  // Move to drop red box
  left90(80);
  delay(500);
  linefollowUntil(3);
  delay(500);
  left90(80);
  delay(500);
  linefollowUntil(3);
  delay(500);
  linefollowEncoder(120);
  delay(200);


  // Move back to drop blue box
  backLinefollowUntil(5);
  delay(500);
  backLinefollowEncoder(100);
  delay(500);
  // Backward to pick strip
  linefollowEncoder(100);
  delay(500);


  // Move to drop 3rd box
  left90(80);
  delay(500);
  linefollowUntil(5);
  delay(500);
  leftTurnEncoder(80, 240);
  delay(500);
  linefollowEncoder(100);
  delay(500);

  // Move to parking
  backLinefollowEncoder(50);
  delay(200);
  backLinefollowUntil(2);
  delay(500); 
  right90(80);
  delay(500);
  linefollowEncoder(500);





}