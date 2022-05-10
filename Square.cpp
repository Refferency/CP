#include "Square.h"

Square::Square(int x, int y, int length) : Figure(x, y)
{
    this->length = length;
}
void Square::show()
{
    cout << " вадрат нарисован" << endl;
}
void Square::hide()
{
    cout << " вадрат скрыт" << endl;
}
void Square::move()
{
    cout << " вадрат перемещЄн" << endl;
}
