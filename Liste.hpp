#ifndef LISTE
#define LISTE
#include <iostream>
#include <string>
#include "Cercle.hpp"
#include "Rectangle.hpp"

const int taille = 100;

class Liste{
    int nb_c;
    int nb_r;
    static int compteur;

    public :
    Liste();
    
    Cercle * cercles[taille];
    Rectangle * rectangles[taille];


};

#endif