#include "piece.h"
#include<vector>
class Bishop : public Piece {
private:
    std::vector<int> moveable;
public:
    bool is_moveable(int loc);
};