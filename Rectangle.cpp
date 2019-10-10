#include "Rectangle.hpp"

Rectangle::Rectangle(): x(0), y(0), w(0), h(0)
{
    std::cout << "Creation Rectangle" << std::endl;
}

Rectangle::Rectangle(int x, int y, int w, int h): x(x), y(y), w(w), h(h)
{
    std::cout << "Creation Rectangle" << std::endl;
}

std::string Rectangle::toString(void){
    std::string chaine = "RECTANGLE "+std::to_string(x)+" "+std::to_string(y)+" "+std::to_string(w)+" "+std::to_string(h);
    return chaine;
}

void Rectangle::setOrdre(int o){
    ordre = o;
}

int Rectangle::getOrdre(){
    return ordre;
}
