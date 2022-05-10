#pragma once
#include <iostream>
//#include <windows.h>
//#include <windowsx.h>
using namespace std;

class Figure { //базовый класс
protected: //координаты одной из вершин (левый нижний угол)
    int x, y;
public:
    Figure(int, int);

    //virtual void show() {};
    //virtual void hide() {};
    //virtual void move() {
    //    cout << "Фигура нарисована" << endl;
    //}
};