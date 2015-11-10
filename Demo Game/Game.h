#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

class Game
{

private:
    bool gameIsRunning = true;

public:

    void Loop();
    void CheckForEvents();

};

#endif // GAME_H_INCLUDED
