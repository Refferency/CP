#pragma once
#include <iostream>
//#include <windows.h>
//#include <windowsx.h>
using namespace std;

class Figure { //������� �����
protected: //���������� ����� �� ������ (����� ������ ����)
    int x, y;
public:
    Figure(int, int);

    //virtual void show() {};
    //virtual void hide() {};
    //virtual void move() {
    //    cout << "������ ����������" << endl;
    //}
};