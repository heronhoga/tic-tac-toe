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

    bool turn = true;
    char numberSelect;

    //in-game
    while (game1.getGameWin() != true) {
        //available choices map
        int availablePlace = 1;
        for (int i = 0; i < board.getArea(); i++)
        {
            for (int j = 0; j < board.getArea(); j++)
            {
                if (board.board[i][j] == ' ') {
                    std::cout << availablePlace << " ";
                } else {
                    std::cout << "  ";
                }
                    ++availablePlace;
            }
            std::cout << "\n";
        
        }
        
        //player insertion
        if (turn) {
            std::cout << "Giliran Player 1 / " << player1.getSign() << " untuk memilih: ";
        } else {
            std::cout << "Giliran Player 2 / " << player2.getSign() << " untuk memilih: ";
        }

        std::cin >> numberSelect;
        std::cin.ignore();

        while (int(numberSelect) < 49 || int(numberSelect) > 57) {
            std::cout << "Pilihan tidak sesuai, mohon pilih kembali" << std::endl;
                if (turn) {
            std::cout << "Giliran Player 1 / " << player1.getSign() << " untuk memilih: ";
                } else {
            std::cout << "Giliran Player 2 / " << player2.getSign() << " untuk memilih: ";
        }

        std::cin >> numberSelect;
        std::cin.ignore();
        }

        availablePlace = 1;

        

        //player mark the board
        for (int i = 0; i < board.getArea(); i++)
        {
            for (int j = 0; j < board.getArea();j++)
            {
                char comparedChar = '0' + availablePlace;
                if (comparedChar == numberSelect) {
                    if (turn) {
                        player1.markTheBoard(player1.getSign(), board.board, i, j);
                    } else if (!turn) {
                        player2.markTheBoard(player2.getSign(), board.board, i, j);
                    }
                }
                ++availablePlace;
            }
            
        }
        
        board.displayArea();
        game1.checkBoard(board.board, player1.getSign(), player2.getSign());
        availablePlace = 1;
        turn = !turn;
    }
    std::cout << "Permainan selesai, pemenangnya adalah: " << game1.checkBoard(board.board, player1.getSign(), player2.getSign()) << std::endl;
    return 0;
}
