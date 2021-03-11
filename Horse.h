#pragma once
#include "Figure.h"
class Horse :
    public Figure
{
public:
    Horse(int xPos, int yPos, Color color) :
        Figure(xPos, yPos, color, m_figureId)
    {
    }

    bool CanMoveToPosition(int xPos, int yPos);
    std::string GetFigureI();

private:
    const std::string m_figureId = "Horse";
};