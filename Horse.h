#pragma once
#include "Figure.h"
class Horse :
    public Figure
{
public:
    bool CanMoveToPosition(int xPos, int yPos);
    char GetFigureId();
private:
    bool MoveHorseOneStep(int point1, int point2);
    bool MoveHorseTwoStep(int point1, int point2);
    const char m_figureId = 'H';
};

