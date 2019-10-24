#ifndef FORME
#define FORME
#include <iostream>
#include "Point.hpp"

class Forme{
    Point p;
    int w; /*largeur*/
    int h; /*hauteur*/
    static int nbFormes;

    public :
        Forme();
        Forme(Point &p, int w, int h);
        void affichage();
};



#endif