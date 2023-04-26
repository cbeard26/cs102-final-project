#ifndef QUEEN_H
#define QUEEN_H

#include "piece.h"
#include "queen.cpp"
#include<vector>
class Queen : public Piece {
private:
    std::vector<std::vector<int>> moveable;
    std::vector<int> location;
    static std::string symbol;
public:
    Queen(std::vector<int>);
    bool is_moveable(int loc);
    std::string get_symbol();
    std::vector<int> get_location();
};

#endif