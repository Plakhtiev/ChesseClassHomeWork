#pragma once
#include <string>
enum Color
{
	ColorError = 0,
	ColorWhite = 1,
	ColorBlack = 2
};

class Figure
{
public:

	Figure(int xPos, int yPos, Color color);

	
	char GetColor();
	void SetCurrentCoordinates( int xPos, int yPos);
	int GetX();
	int GetY();
	bool MoveDirect(int startPos, int endPos, int step);
private:
	Color m_color;
	int m_xPos;
	int m_yPos;	
};