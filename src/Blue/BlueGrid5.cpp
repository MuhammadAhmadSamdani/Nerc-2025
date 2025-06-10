#include <Arduino.h>
#include "ServoControl.h"
#include "LineFollow.h"
#include "EncoderControl.h"
#include "Blue/BlueGrid3.h"

/*
 * Grid 3 according to the Red Arena
 *
 *  grid is 3x3 the points are (1,1), (2,2) and (3,2)
 */

void blue_grid5()
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
  linefollowUntil(1);
  delay(500);

  //left turn 
 linefollowUntil(2);
  delay(500);

  leftTurnEncoder(80,255);
  delay(500);

  //going to pick last box

  linefollowEncoder(70);
  delay(500);
  linefollowUntil(2);
  delay(500);
  

  //going to drop at 1st Station 
  left90(80);
  delay(500);
  linefollowUntil(3);
  delay(500);
  linefollowEncoder(120);
  delay(200);
  // After dropping the red box, move back 4 strips and drop the blue box

  backLinefollowUntil(5);
  delay(500);
  backLinefollowEncoder(100);
  delay(500);
  // Backward to pick strip
  linefollowEncoder(100);
  delay(500);
  leftTurnEncoder(80, 255);
  delay(500);
  // After picking the strip, move forward 5 strips to drop the 3 box
  linefollowUntil(5);
  delay(500);
  leftTurnEncoder(80, 255);
  delay(500);
  linefollowEncoder(100);
  delay(500);
  backLinefollowEncoder(100);
  delay(200);
  // After droping last fruit
  backLinefollowUntil(2);
  delay(500);
  right90(80);
  delay(500);
  linefollowEncoder(550);


  










}