#include <Arduino.h>
#include "ServoControl.h"
#include "LineFollow.h"
#include "EncoderControl.h"
#include "Blue/BlueGrid4.h"

/*
 * Grid 4 according to the Red Arena
 *
 *  grid is 3x3 the points are (1,3), (2,2) and (3,2)
 */

void blue_grid6()
{
   //1st Line
   linefollowFiveUntil(4);
   delay(500);
   //1st turn 
   leftTurnEncoder(80,255);
   delay(500);
 
   //
   linefollowUntil(3);
   delay(500);
 
   //moving to catch box 1------------------
 
   leftTurnEncoder(80,255);
   delay(500);
   linefollowUntil(3);
   delay(500);
 
   //TURN RIGHT
   right90(80);
   delay(500);
 
   //pick 2 Boxes
   linefollowEncoder(70);
   delay(500);
   linefollowUntil(1);
   delay(500);
   linefollowEncoder(70);
   delay(500);
   linefollowUntil(2);
   delay(500);

  //turn right
  right90(80);
  delay(500);
  linefollowEncoder(150);
  delay(500);
  // linefollowUntil(1);
  // delay(500);
  backLinefollowUntil(3);
  delay(500);
  //left turn
  leftTurnEncoder(80,255);
  delay(500);
  
  
  backLinefollowUntil(3);
  delay(500);
  backLinefollowEncoder(130);
  delay(500);
  linefollowUntil(5);
  delay(200);
  linefollowEncoder(100);
  delay(500);
  backLinefollowEncoder(100);
  delay(500);


  right90(80);
  delay(350);
  linefollowUntil(5);
  delay(500);
  leftTurnEncoder(80, 255);
  delay(500);
  linefollowEncoder(120);
  delay(500);
  backLinefollowEncoder(70);
  delay(500);
  backLinefollowUntil(2);
  delay(500);
  right90(80);
  delay(150);
  linefollowEncoder(550);
}
