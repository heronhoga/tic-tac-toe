#include <iostream>
#include "Player.h"
#include "Board.h"
#include "Game.h"

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

    player1.setSign(mark1);
    player2.setSign(mark2);

    std::cout << "Tanda player 1: " << player1.getSign() << "\n";
    std::cout << "Tanda player 2: " << player2.getSign() << "\n";

    std::cout << "---------- ----------" << "\n";

    Game game1;

    std::cout << "Status game mulai: " << game1.getGameStart() << std::endl;
    std::cout << "Status game menang: " << game1.getGameWin() << std::endl;

    bool turn = true;
    int numberSelect;
    while (game1.getGameWin() != true) {
        int availablePlace = 1;
        for (int i = 0; i < board.getArea(); i++)
        {
            for (int j = 0; j < board.getArea(); j++)
            {
                if (board.board[i][j] == ' ') {
                    std::cout << availablePlace << " ";
                    ++availablePlace;
                }
            
            }
            std::cout << "\n";
        
        }
        
        if (turn) {
            std::cout << "Giliran Player 1 / " << player1.getSign() << " untuk memilih: ";
        } else {
            std::cout << "Giliran Player 2 / " << player2.getSign() << " untuk memilih: ";
        }

        std::cin >> numberSelect;
        std::cin.ignore();

        turn = !turn;
        availablePlace = 1;
        
    }
    return 0;
}
