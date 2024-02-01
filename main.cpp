#include <SDL2/SDL_events.h>
#include <SDL2/SDL_keycode.h>
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_video.h>
#include <iostream>
#include <SDL2/SDL.h>
#include <regex>
#include "./helper/phisiks.h"
#include "./plyer.h"

const int KEY_COUNT = 256; // Assuming ASCII key codes

int main(int argc, char *argv[]) {
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    bool run = true;
    SDL_Event e;
    SDL_Rect grond{480/2, 480, 640, 20};

    SDL_Init(SDL_INIT_VIDEO);
    SDL_CreateWindowAndRenderer(640, 480, 0, &window, &renderer);
    PlayerObj player(10, 10, 20, 20, renderer); // Correct instantiation

    // Array to track the state of each key
    bool keys[KEY_COUNT] = {false};

    while (run) {
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_QUIT) {
                run = false;
            }
            else if (e.type == SDL_KEYDOWN) {
                keys[e.key.keysym.sym] = true;
            }
            else if (e.type == SDL_KEYUP) {
                keys[e.key.keysym.sym] = false;
            }
        }

        // Handle player movement based on keys
        if (keys[SDLK_d]) {
            player.moveRight();
        }
        if (keys[SDLK_a]) {
            player.moveLeft();
        }
        if (keys[SDLK_SPACE]) {
            player.jump();
        }

        // Update player position and render
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 100);
        SDL_RenderClear(renderer);

        player.update();
        SDL_SetRenderDrawColor(renderer, 0, 255, 0, 100);
        SDL_RenderFillRect(renderer, &grond);

        SDL_RenderPresent(renderer);
        SDL_Delay(27); // in ms
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
