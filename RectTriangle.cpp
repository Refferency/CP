#include "RectTriangle.h"

RectangularTriangle::RectangularTriangle(int x, int y, int x1, int y1, int x2, int y2) : Figure(x, y)
{
    this->x1 = x1;
    this->y1 = y1;
    this->x2 = x2;
    this->y2 = y2;
}
void RectangularTriangle::show()
{
    cout << "����������� ���������" << endl;
}
void RectangularTriangle::hide()
{
    cout << "����������� �����" << endl;
}
void RectangularTriangle::move()
{
    cout << "����������� ���������" << endl;
}