#include "Square.h"

Square::Square(int x, int y, int length) : Figure(x, y)
{
    this->length = length;
}
void Square::show()
{
    cout << "������� ���������" << endl;
}
void Square::hide()
{
    cout << "������� �����" << endl;
}
void Square::move()
{
    cout << "������� ���������" << endl;
}
