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
        int getArea() const;
        void displayArea() const;
};

#endif
