#ifndef PIECE_H
#define PIECE_H

#include "pawn.h"
#include "rook.h"
#include "knight.h"
#include "bishop.h"
#include "king.h"
#include "queen.h"

class Piece {
private:
protected:
    std::vector<int> location;
public:
    Piece();
    virtual std::string get_symbol();
    bool color; //representing color as bool b/c only 2 options!
    std::vector<int> get_location();
};

#endif