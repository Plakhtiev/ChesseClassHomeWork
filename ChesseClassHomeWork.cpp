/*����������� ���� �������. � ���� � ��� ����� ����������� ������ ���� � ������. ������ ������ ���� ���������������.

class �hessField {
  �hessField() - ����������� ������ � ��������� ������� �������
  bool Step(figureId, xPos, yPos) - ������ ��� ������� �� ������������ �������. ���� ������ ������ ��� ������� - ���������� true ����� �� ���������� � ���������� false
   ShowBoard() - ������� �� ����� ����� � ��������
};*/

#include <iostream>
#include "Figure.h"
#include "King.h"
#include "Horse.h"

int main()
{
    King king(5, 8, ColorBlack);
   // king.SetCurrentCoordinates(8, 8);
    Horse horse(2, 8, ColorBlack);
   // horse.SetCurrentCoordinates(8, 8);


    std::cout << king.CanMoveToPosition(6, 7)<< std::endl;
   std::cout << horse.CanMoveToPosition(6, 9) << std::endl;
}
