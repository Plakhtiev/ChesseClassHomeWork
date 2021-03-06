#include "King.h"

bool King::MoveKingDiag(int pos1, int pos2)
{
    return (pos1 - 1 == pos2);
}

bool King::MoveKingDirect(int pos1, int pos2)
{
    return (pos1 - 1 == pos2 || pos1 + 1 == pos2);
}

bool King::CanMoveToPosition(int xPos, int yPos)
{
    int x = GetX();
    int y = GetY();
    bool leftRigth = (MoveKingDirect(x, xPos) && (y == yPos));
    bool upDown = (MoveKingDirect(y, yPos) && (x == xPos));
    bool diagUp = ((xPos - 1 == x && yPos - 1 == y) || (xPos - 1 == x && yPos + 1 == y));
    bool diagDown = ((xPos - 1 == x && yPos + 1 == y) || (xPos + 1 == x && yPos + 1 == y));
    bool direct = (leftRigth || upDown);
    bool diag = (diagUp || diagDown);
    return (direct || diag);
}
