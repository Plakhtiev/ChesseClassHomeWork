#include "Figure.h"

Figure::Figure(int xPos, int yPos, Color color, const std::string& id) :
	m_color(color),
	m_xPos(xPos),
	m_yPos(yPos),
	m_id(id)
{
}

void Figure::SetCurrentCoordinates(int xPos, int yPos)
{
	m_xPos = xPos;
	m_yPos = yPos;
}

int Figure::GetX()
{
	return m_xPos;
}

int Figure::GetY()
{
	return m_yPos;
}

bool Figure::MoveDirect(int startPos, int endPos, int step) // can move direct
{
	if ((endPos <= 0) || (endPos > 8)) {
		return false;
	}
	return (startPos - step == endPos || startPos + step == endPos);
}

char Figure::GetColor()
{
	return m_color;
}