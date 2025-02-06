#ifndef PLAYER_H
#define PLAYER_H

#include <vector>

class Player {
    private:
        char sign;
    public:
        Player();
        void setSign(char markInput);
        char getSign();
        void markTheBoard(char markInput, std::vector<std::vector<char>>& gameBoard, int i, int j);
};

#endif