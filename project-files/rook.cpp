#include "rook.h"

Rook::Rook(std::vector<int> loc) {
    symbol = "R";
    location = loc;
}

std::vector<int> Rook::get_location() {
    return location;
}

std::string Rook::get_symbol() {
    return symbol;
}