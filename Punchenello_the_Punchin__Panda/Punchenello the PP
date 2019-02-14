#include "Arduboy2.h"
Arduboy2 arduboy;

#include "images.h"
#include "level.h"
#include "panda.h"

#define GAME_TITLE  0
#define LEVEL1  1
#define GAME_WIN  2
#define GAME_OVER 3
int gameState = GAME_TITLE;

void titleScreen()
{
  arduboy.print("Title Screen");

  if (arduboy.justPressed(A_BUTTON))
  {
    gameState = LEVEL1;
  }
}

void level1()
{

  drawLevel();
  drawPanda();
  movePanda();
  
  arduboy.print("Level 1");

 
}

void winScreen()
{
  arduboy.print("You Won");

  if (arduboy.justPressed(A_BUTTON))
  {
    gameState = GAME_OVER;
  }
}

void gameOver()
{
  arduboy.print("You Lost");

  if (arduboy.justPressed(A_BUTTON))
  {
    gameState = GAME_TITLE;
  }
}

void gameLoop() 
{
  switch (gameState) 
  {
    case GAME_TITLE:
    titleScreen();
    break;

    case LEVEL1:
    level1();
    break;

    case GAME_WIN:
    winScreen();
    break;

    case GAME_OVER:
    gameOver();
    break;
  }
}


void setup() 
{
  arduboy.begin();
  arduboy.setFrameRate(45);
  arduboy.display();

  arduboy.initRandomSeed();

  arduboy.clear();

}

void loop() 
{
  if(!(arduboy.nextFrame())) 
  {
    return;
  }

  arduboy.pollButtons();

  arduboy.clear();

  gameLoop();

  arduboy.display();

}
