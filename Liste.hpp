#ifndef LISTE
#define LISTE
#include <iostream>
#include <string>
#include "Cercle.hpp"
#include "Rectangle.hpp"

const int taille = 10;

class Liste{
    int nb_c;
    int nb_r;
    static int compteur;

    public :
    Liste();
    
    Cercle cercles[taille];
    Rectangle rectangles[taille];

    void Ajouter(Cercle c);
    void Ajouter(Rectangle r);
    int getNbC();
    int getNbR();

    std::string toString();
};

#endif