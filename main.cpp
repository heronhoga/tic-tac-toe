#include <iostream>
#include "Player.h"
#include "Board.h"

int main() {
    std::cout << "Welcome to Tic Tac Toe Game!" << std::endl;

    Board board;
    Player player1;
    Player player2;

    char mark1;
    std::cout << "Masukkan tanda player 1: ";
    std::cin >> mark1;

    std::cin.ignore();

    char mark2;
    std::cout << "Masukkan tanda player 2: ";
    std::cin >> mark2;

    while (mark2 == mark1) {
        std::cout << "tanda player 2 tidak boleh sama dengan player 1!" << std::endl;
        std::cout << "Masukkan tanda player 2: ";
        std::cin >> mark2;
    }

    return 0;
}
