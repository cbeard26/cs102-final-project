#include "pawn.h"

Pawn::Pawn(std::vector<int> loc) {
    symbol = "P";
    location = loc;
}

std::vector<int> Pawn::get_location() {
    return location;
}

std::string Pawn::get_symbol() {
    return symbol;
}
