#include "Game.h"
#include <iostream>
#include <vector>

Game::Game() {
    std::cout << "Permainan dimulai!" << std::endl;
    gameStart = true;
    gameWin = false;
}

bool Game::getGameStart() {
    return gameStart;
}

void Game::setGameStart(bool status) {
    gameStart = status;
}

bool Game::getGameWin() {
    return gameWin;
}

void Game::setGameWin(bool status) {
    gameWin = status;
}

char Game::checkBoard(std::vector<std::vector<char>> board, char player1, char player2) {
    //check row and columns
    char winner;
    for (int i = 0; i < board.size(); i++)
    {
        if ((board[i][0] == player1) && (board[i][1] == player1) && (board[i][2] == player1) || (board[0][i] == player1) && (board[1][i] == player1) && (board[2][i] == player1) || (board[0][0] == player1) && (board[1][1] == player1) && (board[2][2] == player1)) {
            gameWin = true;
            winner = player1;

        } else if ((board[i][0] == player2) && (board[i][1] == player2) && (board[i][2] == player2) || (board[0][i] == player2) && (board[1][i] == player2) && (board[2][i] == player2) || (board[0][0] == player2) && (board[1][1] == player2) && (board[2][2] == player2)) {
            gameWin = true;
            winner = player2;
        }
    }

    return winner;
    
}

