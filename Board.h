#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <iostream>

class Board {
    private:
        int area;
        std::vector<std::vector<char>> board;

    public:
        Board();
        Board(int boardArea); 

        int getArea() const;
        void setArea(int boardArea);
        void displayArea() const;
};

#endif
