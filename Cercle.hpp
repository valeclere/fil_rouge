#ifndef CERCLE
#define CERCLE
#include <iostream>
#include <string>

class Cercle{
    int x;
    int y;
    int w;
    int h;
    int rayon;

    int ordre;

    public :
        Cercle();
        Cercle(int,int,int,int);
        Cercle(int,int,int);

        std::string toString(void);
        void setOrdre(int o);
        int getOrdre();

};

#endif