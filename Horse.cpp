#include "Horse.h"

bool Horse::CanMoveToPosition(int xPos, int yPos)
{
	int x = GetX();
	int y = GetY();
	bool leftOrRight = MoveHorseTwoStep(x, xPos) && MoveHorseOneStep(y, yPos);
	bool upOrDown = MoveHorseOneStep(x, xPos) && MoveHorseTwoStep(y, yPos);
	return (leftOrRight || upOrDown);
}

char Horse::GetFigureId()
{
	return m_figureId;
}

bool Horse::MoveHorseOneStep(int point1, int point2)//checks the possibility of a one-cell move
{
	if ((point2 <= 0) && (point2 > 8)) {
		return false;
	}
	return ((point1 - 1 == point2) > 0 || (point1 + 1 == point2) > 0);
}

bool Horse::MoveHorseTwoStep(int point1, int point2)//checks the possibility of a two-cell move
{
	if ((point2 <= 0) && (point2 > 8)) {
		return false;
	}
	return ((point1 - 2 == point2) > 0 || (point1 + 2 == point2) > 0);
}