#ifndef RECTANGLE
#define RECTANGLE
#include <iostream>
#include <string>

class Rectangle{
    int x;
    int y;
    int w;
    int h;
    
    int ordre;

    public :
        Rectangle();
        Rectangle(int,int,int,int);
        
        std::string toString(void);
        void setOrdre(int);
        int getOrdre(void);
};

#endif