#include "Figure.h"

Figure::Figure(int xPos, int yPos) 	
{
	m_pxPos = new int{ xPos };
	m_pyPos = new int{ yPos };	
}

Figure::Figure(int xPos, int yPos, int figureId)
{
	m_pxPos = new int{ xPos };
	m_pyPos = new int{ yPos };
	m_pfigureId = new int{ figureId };
}

Figure::Figure()
{
}


void beCreated(int* field, int val) {

	if (field) {
		*field = val;
	}
	else {
		field = new int{ val };
	}
}

void Figure::SetFigureId(int figureId)
{
	if (m_pfigureId) {
		*m_pfigureId = figureId;
	}
	else {
		m_pfigureId = new int{ figureId };
	}
}

void Figure::SetCurrentCoordinates(int xPos, int yPos)
{
	if (m_pxPos) {
		*m_pxPos = xPos;
	}
	else {
		m_pxPos = new int{ xPos };
	}
	if (m_pyPos) {
		*m_pyPos = yPos;
	}
	else {
		m_pyPos = new int{ yPos };
	}
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