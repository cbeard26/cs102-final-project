#ifndef BISHOP_H
#define BISHOP_H

#include "piece.h"
#include "bishop.cpp"
#include<vector>
class Bishop : public Piece {
private:
    std::vector<std::vector<int>> moveable;
    static std::string symbol;
public:
    Bishop(std::vector<int>);
    bool is_moveable(int loc);
    std::string get_symbol();
};

#endif