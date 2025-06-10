#include <Arduino.h>
#include "ServoControl.h"
#include "LineFollow.h"
#include "EncoderControl.h"
#include "Blue/BlueGrid9.h"

void blue_grid9()
{
 startLineFollow();


  linefollowUntil(4);
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
  linefollowFiveUntil(2);
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