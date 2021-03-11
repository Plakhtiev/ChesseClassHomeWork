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

	char GetColor();
	void SetCurrentCoordinates( int xPos, int yPos);
	int GetX();
	int GetY();
	bool MoveDirect(int startPos, int endPos, int step);

protected:
	Figure(int xPos, int yPos, Color color, const std::string& id);

private:
	Color m_color;
	std::string m_id;
	int m_xPos;
	int m_yPos;	
};