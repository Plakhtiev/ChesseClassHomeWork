#pragma once
class Figure
{
public:
	Figure();
	Figure(int xPos, int yPos);
	Figure(int xPos, int yPos, int figureId);
	char GetColor();
	int GetFigureId();
	void SetFigureId(int figureId);
	void SetCurrentCoordinates( int xPos, int yPos);
	int GetX();
	int GetY();
private:
	char* m_pcolor = nullptr;
	int* m_pxPos = nullptr;
	int* m_pyPos = nullptr;
	int* m_pfigureId = nullptr;// 1 - king, 2 - horse
};