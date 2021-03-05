#pragma once
class Figure
{
public:
	Figure(int xPos, int yPos);
	char GetColor();
	int GetFigureId();
	void SetCurrentCoordinates( int xPos, int yPos);
private:
	char* m_pcolor = nullptr;
	int* m_pxPos = nullptr;
	int* m_pyPos = nullptr;
	int* m_pfigureId = nullptr;
};
