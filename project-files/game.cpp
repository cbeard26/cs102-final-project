#include "game.h"
#include<iostream>

const int BOARD_SIZE = 8;

Game::Game() {}

void Game::display() {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (is_occupied({i,j})) {
                for (Piece* piece : pieces) {
                    if (piece->get_location()[0] == i && piece->get_location()[1] == j) {
                        std::cout << piece->get_symbol();
                    }
                }
            } else {
                std::cout << ".";
            } 
        }
    }
}

void Game::add_knight() {
    Knight* knight;
    pieces.push_back(knight);
}

