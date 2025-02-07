#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <iostream>

class Board {
    private:
        int area;
        

    public:
        Board();
        std::vector<std::vector<char>> board;
        int getArea() const;
        void displayArea() const;
};

#endif
