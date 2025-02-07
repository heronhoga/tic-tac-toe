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

void Game::checkBoard(std::vector<std::vector<char>> board, char player1, char player2) {
    int counterWin = 0;
    //checking row
    for (int i = 0; i < board.size(); i++)
    {
        
    }
    
}

