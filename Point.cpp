#include "Point.hpp"

Point::Point():x(0),y(0)
{}

Point::Point(int x, int y):x(x),y(y)
{}

Point::Point(Point &p): x(p.x),y(p.y)
{}

void Point::affichage()
{
    std::cout << "Abscisse=" << x << " Ordonée=" << y << std::endl;
}