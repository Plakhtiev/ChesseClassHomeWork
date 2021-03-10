#pragma once
#include "Figure.h"
class King :
    public Figure
{
public:
    King(int xPos, int yPos, Color color) :
        Figure(xPos, yPos, color)
    {

    }
    bool CanMoveToPosition(int xPos, int yPos);
    char GetFigereId();

private:
    const char m_figureId = 'K';
};