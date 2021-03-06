#pragma once
#include "Figure.h"
class Horse :
    public Figure
{
    bool CanMoveToPosition(int xPos, int yPos);
};

