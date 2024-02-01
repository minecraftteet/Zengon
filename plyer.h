#pragma once

#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>
#include "./helper/phisiks.h"

class PlayerObj {
public:
  PlayerObj(int x, int y, int w, int h, SDL_Renderer *renderer)
      : x(x), y(y), width(w), height(h), renderer(renderer)
  {
    playerRect = {x, y, w, h};
  }
  void moveRight()
    {
      playerRect.x += 10;
    }
  void moveLeft()
    {
     playerRect.x -= 10;
    }
  void jump()
  {
    // Adjust the player's velocity or position based on the jump
    // For example: playerVelocityY = -20;
    playerRect.y -= 20;
  }

  void update()
  {
    // Update player's position based on physics calculations
    if (playerRect.y <= 450)
      {


      playerRect.y = fall_help(playerRect.y);
      }

    // Render the player
    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 100);
    SDL_RenderFillRect(renderer, &playerRect);
  }

  virtual ~PlayerObj() {}

private:
  int x;
  int y;
  int width;
  int height;
  SDL_Renderer *renderer;
  SDL_Rect playerRect;
};
