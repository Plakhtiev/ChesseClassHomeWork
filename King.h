#pragma once
#include "Figure.h"
class King :
    public Figure
{
public:     
    bool MoveKingDiag(int pos1, int pos2);
    bool MoveKingDirect(int pos1, int pos2);
    bool CanMoveToPosition( int xPos, int yPos);
};