/*����������� ���� �������. � ���� � ��� ����� ����������� ������ ���� � ������. ������ ������ ���� ���������������.
class Horse  // ����������� �� Figure 
{
    bool CanMoveToPosition(xPos, yPos) - ���������� true ���� ������ ������ ��� ������� 
};

class �hessField {
  �hessField() - ����������� ������ � ��������� ������� �������
  bool Step(figureId, xPos, yPos) - ������ ��� ������� �� ������������ �������. ���� ������ ������ ��� ������� - ���������� true ����� �� ���������� � ���������� false
  ShowBoard() - ������� �� ����� ����� � ��������
};*/

#include <iostream>
#include "Figure.h"
#include "King.h"

int main()
{
    King king;
    king.SetCurrentCoordinates(2, 3);
    king.SetFigureId(1);
    

    std::cout << king.GetFigureId();
}
