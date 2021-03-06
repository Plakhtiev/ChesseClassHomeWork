/*Реализовать игру шахматы. В игре у нас будут участвовать только конь и король. Игроки делают ходы последовательно.
class Horse  // наследуется от Figure 
{
    bool CanMoveToPosition(xPos, yPos) - возвращает true если фигура смогла так перейти 
};

class СhessField {
  СhessField() - расставляет фигуры в начальные позиции позиции
  bool Step(figureId, xPos, yPos) - делает шаг фигурой на определенную позицию. если фигура смогла так перейти - возвращает true иначе не перемещает и возвращает false
  ShowBoard() - выводит на экран доску с фигурами
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
