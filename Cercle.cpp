#include "Cercle.hpp"

Cercle::Cercle(): x(0), y(0), w(0), h(0)
{
    std::cout << "Creation Cercle" << std::endl;
}

Cercle::Cercle(int x, int y, int w, int h): x(x), y(y), w(w), h(h)
{
    std::cout << "Creation Cercle" << std::endl;
}

Cercle::Cercle(int x,int y,int r): x(x), y(y), rayon(r)
{}

std::string Cercle::toString(void){
    std::string chaine = "CERCLE "+std::to_string(x)+" "+std::to_string(y)+" "+std::to_string(w)+" "+std::to_string(h);
    return chaine;
}

void Cercle::setOrdre(int o){
    ordre = o;
}

int Cercle::getOrdre(){
    return ordre;
}