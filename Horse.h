#pragma once
#include "Figure.h"
class Horse :
    public Figure
{
public:
    Horse(int xPos, int yPos, Color color) :
        Figure(xPos, yPos, color)
    {
    }

    bool CanMoveToPosition(int xPos, int yPos);
    char GetFigureId();
private:
    const char m_figureId = 'H';
};

