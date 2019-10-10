#include <iostream>
#include "Rectangle.hpp"
#include "Cercle.hpp"
#include <string>

int main(int, char **)
{
    Rectangle r(1,1,1,1);
    r.toString();
    Cercle c;
    std::cout << r.toString() << std::endl;

    return 0;
}