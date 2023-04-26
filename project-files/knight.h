#ifndef KNIGHT_H
#define KNIGHT_H

#include "piece.h"
#include "knight.cpp"
#include<vector>
class Knight : public Piece {
private:
    std::vector<std::vector<int>> moveable;
    static std::string symbol;
public:
    Knight(std::vector<int>);
    bool is_moveable(int loc);
    std::string get_symbol();
};

#endif