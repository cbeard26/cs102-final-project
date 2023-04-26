#include "king.h"

King::King(std::vector<int> loc) {
    symbol = "+";
}

std::string King::get_symbol() {
    return symbol;
}