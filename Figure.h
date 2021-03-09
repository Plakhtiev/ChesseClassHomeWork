#pragma once
class Figure
{
public:
	Figure();
	Figure(int xPos, int yPos, char color);
	~Figure();

	void beCreated(int* field, int val);
	char GetColor();
	void SetCurrentCoordinates( int xPos, int yPos);
	int GetX();
	int GetY();
private:
	char* m_pcolor = nullptr;
	int* m_pxPos = nullptr;
	int* m_pyPos = nullptr;	
};