#include <iostream>
#include "Rectangle.hpp"
#include "Cercle.hpp"
#include <string>
#include "Liste.hpp"
#include "Point.hpp"
#include "Point.hpp"
#include "Forme.hpp"

int main(int, char **)
{
    /* TP3
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
    */ 

    Point p1(1,2);
    Point p2(p1);
    Forme f1;
    Forme f2(p1,3,4);
    f2.affichage();
    std::cout << std::endl;
    f1.affichage();
    //p2.affichage();

    return 0;
}