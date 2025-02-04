#include "Board.h"
#include <vector>

Board::Board() : area(3) {
    board = std::vector<std::vector<char>>(area, std::vector<char>(area, ' '));
}

Board::Board(int boardArea) : area(boardArea) {
    board = std::vector<std::vector<char>>(area, std::vector<char>(area, ' '));
}

int Board::getArea() const {
    return area;
}

void Board::setArea(int boardArea) {
    area = boardArea;
    board = std::vector<std::vector<char>>(area, std::vector<char>(area, ' '));
}

void Board::displayArea() const {
    for (int i = 0; i < area; ++i) {
        for (int j = 0; j < area; ++j) {
            std::cout << board[i][j];
            if (j < area - 1) {
                std::cout << " | ";
            }
        }
        std::cout << std::endl;
        if (i < area - 1) {
            std::cout << "---+---+---" << std::endl;
        }
    }
}
