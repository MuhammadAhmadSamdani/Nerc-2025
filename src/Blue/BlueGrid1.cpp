#include <Arduino.h>
#include "ServoControl.h"
#include "LineFollow.h"
#include "EncoderControl.h"
#include "Blue/BlueGrid1.h"

/*
 * Grid 1
 *
 *  grid is 3x3 the points are (2,1), (2,2) and (2,3)
 */

void blue_grid1()
{

  // forwardWithEncoder(50, 80);
  //------------------ Starting Point -------------------
  linefollowFiveUntil(4);
  delay(500);
  leftTurnEncoder(80, 255);
  delay(500);
  
  // move forward for 5 strip
  linefollowUntil(5);
  delay(500);

  // turn left for rock
  leftTurnEncoder(80, 255);
  delay(500);

  // move forward 3 strips and pick box
  linefollowEncoder(60);
  delay(500);
  linefollowUntil(1);
  delay(500);
  linefollowEncoder(60);
  delay(500);
  linefollowUntil(1);
  delay(500);
  linefollowEncoder(60);
  delay(500);
  linefollowUntil(2);
  delay(500);

  //HERE ALL BOXES ARE ALREADY PICKED
  leftTurnEncoder(80, 255);
  delay(500);

  // Drop Red Box
  linefollowUntil(2);
  delay(500);
  linefollowEncoder(140);
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

  // After droping last fruit 
  backLinefollowUntil(2);
  delay(500);
 
  

  // Go to the Parking
  right90(160);
  delay(500);
  linefollowEncoder(500);

 
  
}



  