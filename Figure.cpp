#include "Figure.h"

Figure::Figure(int xPos, int yPos) 	
{
	m_pxPos = new int{ xPos };
	m_pyPos = new int{ yPos };	
	m_pfigureId = new int;
}

Figure::Figure(int xPos, int yPos, int figureId)
{
	m_pxPos = new int{ xPos };
	m_pyPos = new int{ yPos };
	m_pfigureId = new int{ figureId };
}

Figure::Figure()
{
	m_pxPos = new int;
	m_pyPos = new int;
	m_pfigureId = new int;
}

void Figure::beCreated(int* field, int val)
{
	if (field) {
		*field = val;
	}
	else {
		field = new int{ val };
	}
}

void Figure::SetFigureId(int figureId)
{
	beCreated(m_pfigureId, figureId);
}

void Figure::SetCurrentCoordinates(int xPos, int yPos)
{
	beCreated(m_pxPos, xPos);
	beCreated(m_pyPos, yPos);
	
}


int Figure::GetX()
{
	return *m_pxPos;
}

int Figure::GetY()
{
	return *m_pyPos;
}

char Figure::GetColor()
{
	return *m_pcolor;
}

int Figure::GetFigureId()
{
	return *m_pfigureId;
}