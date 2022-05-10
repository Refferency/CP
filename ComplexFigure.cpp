#include "ComplexFigure.h"

ComplexFigure::ComplexFigure(Square* _s, RectangularTriangle* _rt) : s(_s), rt(_rt) {};
void ComplexFigure::show() 
{
    s->show();
    rt->show();
}
void ComplexFigure::hide() 
{
    s->hide();
    rt->hide();

}
void ComplexFigure::move() 
{
    s->move();
    rt->move();
}