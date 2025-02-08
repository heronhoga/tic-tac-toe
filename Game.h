#ifndef GAME_H
#define GAME_H

#include <vector>
#include <iostream>

class Game {
    private:
        bool gameStart;
        bool gameWin;
    public:
        Game();
        bool getGameStart();
        bool getGameWin();
        void setGameStart(bool status);
        void setGameWin(bool status);
        char checkBoard(std::vector<std::vector<char>> board, char player1, char player2);
};

#endif