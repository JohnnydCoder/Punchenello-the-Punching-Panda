
#pragma once
#include "images.h"
#include "globals.h"

#define WORLD_HEIGHT    4
#define WORLD_WIDTH     28
#define SKIES           0
#define GROUND          1
#define UGROUND     2

uint8_t world [WORLD_HEIGHT] [WORLD_WIDTH] =
{
  {SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES,SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES},
  {SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES,SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES},
  {SKIES, SKIES, SKIES, GROUND, SKIES, SKIES, SKIES, SKIES, GROUND,SKIES, SKIES, SKIES, SKIES, SKIES, SKIES,SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES, SKIES},
  {GROUND,GROUND,GROUND,UGROUND,GROUND,GROUND,GROUND,GROUND,UGROUND,GROUND,GROUND,GROUND,GROUND,GROUND,GROUND,GROUND,GROUND,GROUND,GROUND,GROUND,GROUND,GROUND,GROUND,GROUND,GROUND,GROUND,GROUND,GROUND}
};

#define TILE_SIZE      16
void drawLevel()
{
  const int tileswide = WIDTH / TILE_SIZE + 1;
  const int tilestall = HEIGHT / TILE_SIZE + 1;

  for(int y = 0; y < tilestall; y++) 
  {
    for(int x = 0; x < tileswide; x++) 
    {
      const int tilex = x - mapx / TILE_SIZE;
      const int tiley = y - mapy / TILE_SIZE;
      
      if(tilex >= 0 && tiley >= 0 && tilex < WORLD_WIDTH && tiley < WORLD_HEIGHT) {
        arduboy.drawBitmap(x * TILE_SIZE + mapx % TILE_SIZE, y * TILE_SIZE + mapy % TILE_SIZE, gameTiles[world[tiley][tilex]], TILE_SIZE, TILE_SIZE, WHITE);
      }   
    }
  }
}
