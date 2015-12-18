#ifndef LU_SETRECT_H_INCLUDED
#define LU_SETRECT_H_INCLUDED

void LU_SetRect(SDL_Rect *rect, int w, int h, int x, int y)
{
    rect->h = h;
    rect->w = w;
    rect->x = x;
    rect->y = y;
}

#endif // LU_SETRECT_H_INCLUDED
