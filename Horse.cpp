#include "Horse.h"


bool Horse::CanMoveToPosition(int xPos, int yPos)
{
	int x = GetX();
	int y = GetY();
	bool leftOrRight = MoveDirect(x, xPos, 2) && MoveDirect(y, yPos, 1);
	bool upOrDown = MoveDirect(x, xPos, 1) && MoveDirect(y, yPos, 2);
	return (leftOrRight || upOrDown);
}

std::string Horse::GetFigureI()
{
	return m_figureId;
}