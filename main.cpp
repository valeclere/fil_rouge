#include <iostream>
#include "Rectangle.hpp"
#include "Cercle.hpp"
#include <string>
#include "Liste.hpp"

int main(int, char **)
{
    Rectangle r(1,1,1,1);
    r.toString();
    Cercle c1(2,2,2,2),c2(3,3,3,3), c3(4,4,5,5);
    std::cout << r.toString() << std::endl;

    Liste l0;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    l0.Ajouter(c1); l0.Ajouter(r); l0.Ajouter(c2); l0.Ajouter(r); l0.Ajouter(c3);

    std::cout << "LISTE  " << l0.toString() << std::endl;


    return 0;
}