#pragma once
#include "Figure.h"

class Square : public Figure {
private: //x y �� ����
    int length;
public:
    Square(int, int, int);
    void show();
    void hide();
    void move();
};