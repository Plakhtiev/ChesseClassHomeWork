/*Реализовать игру шахматы. В игре у нас будут участвовать только конь и король. Игроки делают ходы последовательно.

class СhessField {
  СhessField() - расставляет фигуры в начальные позиции позиции
  bool Step(figureId, xPos, yPos) - делает шаг фигурой на определенную позицию. если фигура смогла так перейти - возвращает true иначе не перемещает и возвращает false
   ShowBoard() - выводит на экран доску с фигурами
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
