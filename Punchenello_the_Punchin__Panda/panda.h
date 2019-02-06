#include "images.h"
#include "globals.h"

void drawPanda() 
{
arduboy.fillRect(panda.x, panda.y, 22, 24, BLACK);

}

void movePanda()
{

    if(arduboy.pressed(RIGHT_BUTTON) && panda.x + 22 < mapx + TILE_SIZE * WORLD_WIDTH)
    {
     mapx--;
    }

    if(arduboy.pressed(LEFT_BUTTON) && mapx < 0)
    {
      mapx++;
    }
    
  if (!panda.isJumping)
  {
    if (arduboy.justPressed(A_BUTTON)) {
      panda.isJumping = true;
      panda.jumpIndex = 0;
    }
  }
    if (panda.isJumping)
    {
      panda.y = jumpCoords[panda.jumpIndex];
      panda.jumpIndex++;
    
      if (panda.jumpIndex == sizeof(jumpCoords)) {
    
        panda.isJumping = false;
        panda.jumpIndex = 0;
        panda.y = PLAYER_Y;
      }
    }
}
