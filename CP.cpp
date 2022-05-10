#include "Vector.h"

int main() {
    setlocale(LC_ALL, "Rus");
    Square s(50, 50, 100);
    RectangularTriangle rt(100, 100, 200, 200, 300, 300);
    ComplexFigure complex(&s, &rt);
    
    s.show();
    s.hide();
    s.move();

    rt.show();
    rt.hide();
    rt.move();

    cout << endl;
    complex.show();
    complex.hide();
    complex.move();


}
