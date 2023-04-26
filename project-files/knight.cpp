#include "knight.h"

Knight::Knight(std::vector<int> loc) {
    symbol = "K";
    location = loc;
}

std::string Knight::get_symbol() {
    return symbol;
}