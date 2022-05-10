#pragma once
#include "Figure.h"

class RectangularTriangle : public Figure {
private: //x y �� ����
    int x1, y1;
    int x2, y2;
public:
    RectangularTriangle(int, int, int, int, int, int);
    void show();
    void hide();
    void move();
};
