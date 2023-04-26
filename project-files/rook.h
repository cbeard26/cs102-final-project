#ifndef ROOK_H
#define ROOK_H

#include "piece.h"
#include "rook.cpp"
#include<vector>

class Rook : public Piece {
private:
    std::vector<std::vector<int>> moveable;
    std::vector<int> location;
    static std::string symbol;
public:
    Rook(std::vector<int>);
    bool is_moveable(int loc);
    std::string get_symbol();
    std::vector<int> get_location();
};

#endif