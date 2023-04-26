#ifndef PAWN_H
#define PAWN_H

#include "piece.h"
#include "pawn.cpp"
#include<vector>
class Pawn : public Piece {
private:
    std::vector<std::vector<int>> moveable;
    std::vector<int> location;
    static std::string symbol;
public:
    Pawn(std::vector<int>);
    bool is_moveable(int loc);
    std::string get_symbol();
    std::vector<int> get_location();
};

#endif