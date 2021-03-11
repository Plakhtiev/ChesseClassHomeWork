#pragma once
#include "Figure.h"
#include <string>

class King :
    public Figure
{
public:
    King(int xPos, int yPos, Color color) :
        Figure(xPos, yPos, color, m_figureId)
    {
    }
    
    bool CanMoveToPosition(int xPos, int yPos);
    std::string GetFigureId();

private:
    const std::string m_figureId = "King";
};