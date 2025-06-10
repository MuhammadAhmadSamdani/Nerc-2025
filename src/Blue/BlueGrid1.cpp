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

  backLinefollowEncoder(70);
  delay(500);

  Servo3.write(0);
  delay(500);

  // // move forward 3 strips and pick box
  linefollowEncoder(162);
  delay(500);

  Servo3Move(0,70);
  delay(500);

  linefollowFiveUntil(2);
  delay(500);

  right90(80);
  delay(500);

  backLinefollowEncoder(70);
  delay(500);

  mainServoMove(0,65);
  delay(500);



  Servo2.write(0);
  delay(500);

  linefollowEncoder(162);
  delay(500);

  Servo2Move(0,70);
  delay(500);

  backLinefollowFiveUntil(1);
  delay(500);

  leftTurnEncoder(80, 250);
  delay(500);

  //p[ick 3rd box]
  backLinefollowEncoder(100);
  delay(500);

  mainServoMove(65,130);
  delay(500);

  Servo1.write(0);
  delay(500);

  linefollowEncoder(162);
  delay(500);

  Servo1Move(0,70);
  delay(500);

  linefollowFiveUntil(2);
  delay(500);

  leftTurnEncoder(80, 250);
  delay(500);

  

  

  Servo1Move(70,15);
  delay(500);

  linefollowEncoder(270);
  delay(500);

  

  Servo1Move(15,0);
  delay(500);

  backLinefollowFiveUntil(5);
  delay(500);











}