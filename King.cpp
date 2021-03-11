#include "King.h" 

bool King::CanMoveToPosition(int xPos, int yPos)
{
    int x = GetX();
    int y = GetY();
    bool leftRigth = (MoveDirect(x, xPos, 1) && (y == yPos));
    bool upDown = (MoveDirect(y, yPos, 1) && (x == xPos));
    bool diagUp = ((xPos - 1 == x && yPos - 1 == y) || (xPos - 1 == x && yPos + 1 == y));
    bool diagDown = ((xPos - 1 == x && yPos + 1 == y) || (xPos + 1 == x && yPos + 1 == y));
    bool direct = (leftRigth || upDown);
    bool diag = (diagUp || diagDown);
    return (direct || diag);
}

std::string King::GetFigureId()
{
    return m_figureId;
}
