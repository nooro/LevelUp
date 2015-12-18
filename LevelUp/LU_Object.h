#ifndef LU_OBJECT_H_INCLUDED
#define LU_OBJECT_H_INCLUDED

class LU_Object
{
private:
    SDL_Rect rect;
    bool isVisible;

public:
    LU_Object(int x = 0, int y = 0, int w = 0, int h = 0)
    {
        rect.x = x;
        rect.y = y;
        rect.w = w;
        rect.h = h;

        isVisible = true;
    }

    ~LU_Object()
    {
        //free(&rect);
        //delete (&rect);
    }

    int getX() { return rect.x; }
    int getY() { return rect.y; }
    int getW() { return rect.w; }
    int getH() { return rect.h; }

    void setX(int value) { rect.x = value; }
    void setY(int value) { rect.y = value; }
    void setW(int value) { rect.w = value; }
    void setH(int value) { rect.h  = value; }

    bool mouseIsOver()
    {
        return false;
    }

    void MakeVisible() { isVisible = true; }
    void MakeInvisible() { isVisible = false; }
    bool IsVisible() { return isVisible; }
    bool IsInvisible() { return isVisible; }


};

#endif // LU_OBJECT_H_INCLUDED
