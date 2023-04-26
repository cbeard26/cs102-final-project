#include "queen.h"

Queen::Queen(std::vector<int> loc) {
    symbol = "Q";
    location = loc;
}

std::vector<int> Queen::get_location() {
    return location;
}

std::string Queen::get_symbol() {
    return symbol;
}