#ifndef LU_INIT_H_INCLUDED
#define LU_INIT_H_INCLUDED

class LU
{
public:
    static SDL_Window *Window;
    static SDL_Renderer *Renderer;
    static SDL_Event *Event;
};

void LU_AddEventListener(SDL_Event *event)
{

}

void LU_AddWindow(SDL_Window *window)
{
    LU::&Window = NULL;
}

void LU_AddRenderer(SDL_Renderer *renderer)
{

}

#endif // LU_INIT_H_INCLUDED
