#include <Arduino.h>
#include "ServoControl.h"
#include "LineFollow.h"
#include "EncoderControl.h"
#include "Blue/BlueGrid2.h"

/*
 * Grid 2 According to the Blue Arena
 *
 *  grid is 3x3 the points are (1,1), (1,2) and (1,3)
 */

void blue_grid2()
{
    // forwardWithEncoder(50, 80);
  //------------------ Starting Point -------------------
  linefollowFiveUntil(4);
  delay(500);
  leftTurnEncoder(80, 255);
  delay(500);
  
  // move forward for 6 strip
  linefollowUntil(6);
  delay(500);

  // turn left for rock
  leftTurnEncoder(80, 255);
  delay(500);

  // move forward 3 strips and pick box
  linefollowEncoder(40);
  delay(500);
  linefollowUntil(1);
  delay(500);
  linefollowEncoder(40);
  delay(500);
  linefollowUntil(1);
  delay(500);
  linefollowEncoder(40);
  delay(500);
  linefollowUntil(2);
  delay(500);

  //HERE ALL BOXES ARE ALREADY PICKED
  leftTurnEncoder(80, 255);
  delay(500);

  // Drop Red Box
  linefollowUntil(3);
  delay(500);
  linefollowEncoder(100);
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
  linefollowEncoder(110);
  delay(500);
  backLinefollowEncoder(110);
  delay(200);

  // After droping last fruit 
  backLinefollowUntil(2);
  delay(500);
 

  // Go to the Parking
  right90(90);
  delay(500);
  linefollowEncoder(500);
}