#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include "Game.h"
#include "launcher.h"
#include "DGLv.0.1/DGL.h"

using namespace std;

void loadTextures();
void SeekAndDestroy();

///MAIN
int main(int argc, char **argv)
{
    SDL_Init(SDL_INIT_EVERYTHING);

    window = SDL_CreateWindow("Demo Game",
                              SDL_WINDOWPOS_CENTERED,
                              SDL_WINDOWPOS_CENTERED,
                              windowWidth,
                              windowHeight,
                              SDL_WINDOW_SHOWN
                              );

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    loadTextures();

    game.Loop();

    SeekAndDestroy();
    SDL_Quit();
    return 0;
}


///LOAD TEXTURES
void loadTextures()
{
    backgroundTexture = DGL_CreateTexture(backgroundPath, renderer);
}


///„DESTROY THE USED OBJECTS AND FREE THE USED MEMORY“
///                                      -METALLICA
///     https://www.youtube.com/watch?v=NJzoBmVPeYw
void SeekAndDestroy()
{
    SDL_DestroyTexture(backgroundTexture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
}
