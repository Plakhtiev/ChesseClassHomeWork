#pragma once
#include "Figure.h"
class King :
    public Figure
{
public:

    bool CanMoveToPosition(int xPos, int yPos);
    char GetFigereId();

private:
    bool MoveKingDiag(int pos1, int pos2);
    bool MoveKingDirect(int pos1, int pos2);
    const char m_figureId = 'K';
};