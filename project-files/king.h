#include "piece.h"
#include<vector>
class King : public Piece {
private:
    std::vector<int> moveable;
public:
    bool is_moveable(int loc);
};