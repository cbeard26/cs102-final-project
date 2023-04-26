#ifndef KING_H
#define KING_H

#include "piece.h"
#include "king.cpp"
#include<vector>

class King : public Piece {
private:
    std::vector<std::vector<int>> moveable;
    static std::string symbol;
public:
    King(std::vector<int>);
    bool is_moveable(int loc);
    std::string get_symbol();
};

#endif