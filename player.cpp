#include <SDL2/SDL.h>
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_render.h>
#include "./helper/phisiks.h"

class PlyerOb {
public:
  PlyerOb(int x,int y,  int w, int h ,char *name[20], SDL_Renderer *sean)
  {
    xu = x;
    yu =y;
    wu = w;
    hu = h;
    *named = *name;
    rander = sean;
  };

  void jump()
  {
    plyer.y -= 20;
  }
  void update()
  {
    plyer.y = fall_help(plyer.y);
    SDL_SetRenderDrawColor(rander, 255, 255, 255, 100);
    SDL_RenderFillRect(rander, &plyer);
  }
  virtual ~PlyerOb();


private:
  int xu;
  int yu;
  int wu;
  int hu;
  SDL_Renderer *rander;
  SDL_Rect plyer{xu,yu,wu,hu};
  char *named[20];
};
