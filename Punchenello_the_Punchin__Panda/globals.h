#ifndef GLOBALS_H
#define GLOBALS_H

#include "images.h"

#define PLAYER_X  WIDTH / 2 - 22
#define PLAYER_Y    HEIGHT / 2 

int mapx = 0;
int mapy = 0;

enum Stance 
{
  Right1,
  Right2,
  Left1, 
  Left2,
  Jumping,
};

struct Panda 
{
  int x;
  int y;
  Stance stance;
  bool isJumping;
  byte jumpIndex;
  bool pandaPunchEnabled;
  char image;
};

Panda panda = {PLAYER_X, PLAYER_Y, Stance::Right1, false, false, pandaImages};

unsigned char jumpCoords[] = {32, 29, 25, 20, 19, 17, 15, 13, 10, 8, 7, 6, 5, 4, 3, 2, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 2, 3, 4, 5, 6, 7, 8, 10, 13, 15, 17, 19, 20, 25, 29, 32,};

#endif
