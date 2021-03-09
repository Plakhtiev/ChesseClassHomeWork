#include "Figure.h"

Figure::Figure()
{
	m_pxPos = new int;
	m_pyPos = new int;
	m_pcolor = new char;
}

Figure::Figure(int xPos, int yPos, char color)
{
	m_pxPos = new int{ xPos };
	m_pyPos = new int{ yPos };	
	m_pcolor = new char{ color };
}

Figure::~Figure()
{
	delete m_pxPos;
	delete m_pyPos;
	delete m_pcolor;
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
