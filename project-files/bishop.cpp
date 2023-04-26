#include "bishop.h"

Bishop::Bishop(std::vector<int> loc) {
    symbol = "B";
    location = loc;
}

std::string Bishop::get_symbol() {
    return symbol;
}