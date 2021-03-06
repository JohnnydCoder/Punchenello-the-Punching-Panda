#pragma once;

const unsigned char gameTiles[3][32] PROGMEM =
{
//Sky Tiles
{ 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xbf, 0xbf, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfd, 0xfd, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff },
// Ground Tiles
{ 0xe8, 0xb4, 0xfa, 0xfd, 0xfa, 0xf4, 0xe8, 0x50, 0xd0, 0xe8, 0xf4, 0xfa, 0xfd, 0xfa, 0xb4, 0xe8,
0xff, 0xef, 0xff, 0xff, 0xfd, 0xff, 0xb7, 0xff, 0xff, 0xff, 0x7d, 0xff, 0xff, 0xef, 0xff, 0xfd },
//Under Ground Tiles
{ 0xff, 0xef, 0xff, 0xff, 0xfb, 0xff, 0xdf, 0xff, 0xff, 0xef, 0xff, 0xff, 0xfd, 0xff, 0xdf, 0xff,
0xff, 0xbf, 0xff, 0xfe, 0xff, 0xff, 0xbb, 0xff, 0xff, 0xff, 0xde, 0xff, 0xff, 0xfb, 0xff, 0xff },
};

const unsigned char pandaImages[] PROGMEM =
{

  22, 24,
  //Right 1
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x12, 0xf2, 0xfd, 0xfd, 0xfe, 0x8c, 0x8c, 0xa8, 0x90, 0xe0,
0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x20, 0x10, 0x08, 0x08, 0x88, 0x8f, 0x8f, 0x8f,
0x8f, 0x8f, 0x8e, 0x8d, 0x8d, 0x8f, 0x88, 0x88, 0x84, 0x42, 0x22, 0x1c, 0x00, 0x00, 0x01, 0x02,
0x32, 0x49, 0xc4, 0x83, 0x91, 0x69, 0x05, 0x03, 0xff, 0x81, 0x81, 0x9f, 0x90, 0x90, 0x60, 0x00,
0x00, 0x00, 
// Right 2
0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x12, 0xf2, 0xfd, 0xfd, 0xfe, 0x8c, 0x8c, 0xa8, 0x90, 0xe0,
0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x1f, 0x1f,
0x1f, 0x1f, 0x1e, 0x1d, 0x1d, 0x9f, 0xa8, 0x94, 0x5c, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0xff, 0x81, 0x81, 0x9f, 0xff, 0x81, 0x81, 0x9f, 0x90, 0x90, 0x60, 0x00,
0x00, 0x00, 

};

