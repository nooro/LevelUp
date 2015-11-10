#ifndef LAUNCHER_H_INCLUDED
#define LAUNCHER_H_INCLUDED

//Window
SDL_Window *window = NULL;
int windowWidth = 480;
int windowHeight = 360;

//Renderer
SDL_Renderer *renderer = NULL;

//Resources Paths
#include "resourcesPaths.h"

//Textures
#include "textures.h"

Game game;

#endif // LAUNCHER_H_INCLUDED
