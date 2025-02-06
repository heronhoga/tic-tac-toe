#include "Player.h"
#include <iostream>
#include <vector>

Player::Player(char playerSign) : sign(playerSign) {}

char Player::getSign() {
    return sign;
}

void Player::markTheBoard(char markInput, std::vector<std::vector<char>>& gameBoard, int i, int j) {
    if (i >= 0 && i < gameBoard.size() && j >= 0 && j < gameBoard[i].size()) {
        gameBoard[i][j] = markInput;  // Update board di posisi (i, j)
    } else {
        std::cout << "Invalid move!" << std::endl;
    }
}



