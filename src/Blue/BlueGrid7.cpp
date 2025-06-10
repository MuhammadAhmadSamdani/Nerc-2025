#include <Arduino.h>
#include "ServoControl.h"
#include "LineFollow.h"
#include "EncoderControl.h"
#include "Blue/BlueGrid5.h"

/*
 * Grid 5 according to the Red Arena
 *
 *  grid is 3x3 the points are (3,1), (2,1) and (3,3)
 */
void blue_grid7()
{
  //1st Line
  linefollowFiveUntil(4);
  delay(500);
  //1st turn 
  leftTurnEncoder(80,255);
  delay(500);

  //
  linefollowUntil(4);
  delay(500);

   //moving to catch box 1------------------
 
   leftTurnEncoder(80,255);
   delay(500);
   backLinefollowEncoder(60);
   delay(500);
   linefollowUntil(1);
   //rightTurnEncoder(80,255)
   linefollowEncoder(80);
   delay(500);
   linefollowUntil(2);
   delay(500);
   ///going to pick 2nd box;
   right90(80);
   delay(500);
   linefollowEncoder(80);
   delay(500);
   linefollowUntil(2);
   delay(500);
   left90 (80);
   linefollowEncoder(90);
   delay(500);
   linefollowUntil(2);
   delay(500);


   //picking 3rd pox
  //  leftTurnEncoder(80,255);
  //  delay(500);
  //  linefollowUntil(3);
  //  delay(500);
  //  linefollowEncoder(150);
  //  delay(500);
   //going to drop at station 1

   leftTurnEncoder(80,255);
  delay(500);
  linefollowUntil(3);
  delay(500);
  linefollowEncoder(150);
  delay(500);
  backLinefollowUntil(5);
  delay(150);
   backLinefollowEncoder(80);
  delay(500);
  linefollowEncoder(80);
  delay(500);

  //going to drop at 3rd Station 
  left90(80);
  delay(500);
  linefollowUntil(5);
  delay(500);

  leftTurnEncoder(80,255);
  delay(500);
  linefollowEncoder(110);
  delay(500);
 


  //going to parking
  backLinefollowEncoder(50);
  delay(500);
  backLinefollowUntil(2);
  delay(500);
  right90(80);
  delay(500);
 
  linefollowEncoder(550);
  delay(500);
   

  





   

   

    

   



}