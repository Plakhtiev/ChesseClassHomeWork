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
    King king;
    king.SetCurrentCoordinates(2, 3);
    Horse horse;
    horse.SetCurrentCoordinates(8, 8);


    //std::cout << king.GetFigereId()<< std::endl;
    std::cout << horse.CanMoveToPosition(6, 7) << std::endl;
}
