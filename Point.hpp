#ifndef POINT
#define POINT
#include <iostream>

class Point{
    int x;
    int y;

    public :
        Point();
        Point(int x, int y);
        Point(Point &p);

        void affichage();

};

#endif