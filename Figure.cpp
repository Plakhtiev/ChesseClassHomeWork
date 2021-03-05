#include "Figure.h"

Figure::Figure(int xPos, int yPos) 	
{
	m_pxPos = new int{ xPos };
	m_pyPos = new int{ yPos };
}

char Figure::GetColor()
{
	return *m_pcolor;
}

int Figure::GetFigureId()
{
	return *m_pfigureId;
}

void Figure::SetCurrentCoordinates(int xPos, int yPos)
{
	*m_pxPos = xPos;
	*m_pyPos = yPos;
}
