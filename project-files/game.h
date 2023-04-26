#ifndef GAME_H
#define GAME_H

#include<vector>
#include "piece.h"
class Game {
private:
public:
    std::vector<Piece*> pieces;
    Game();
    void Game::display();
    bool is_occupied(std::vector<int> loc);
    void add_knight();
};

#endif
