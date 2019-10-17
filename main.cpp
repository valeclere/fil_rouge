#include <iostream>
#include "Rectangle.hpp"
#include "Cercle.hpp"
#include <string>
#include "Liste.hpp"

int main(int, char **)
{
    Rectangle r(1,1,1,1);
    r.toString();
    Cercle c1,c2, c3;
    std::cout << r.toString() << std::endl;

    Liste l0;
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    l0.Ajouter(c1); l0.Ajouter(r); l0.Ajouter(c2); l0.Ajouter(r); l0.Ajouter(c3);

    std::cout << "LISTE : " << l0.toString() << std::endl;


    return 0;
}