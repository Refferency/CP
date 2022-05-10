#pragma once
#include "RectTriangle.h"
#include "Square.h"

class ComplexFigure {
private:
    Square* s;
    RectangularTriangle* rt;
public:
    ComplexFigure(Square*, RectangularTriangle*);
    void show();
    void hide();
    void move();
};