#include "piece.h"
#include<vector>
class Rook : public Piece {
private:
    std::vector<int> moveable;
public:
    bool is_moveable(int loc);
};