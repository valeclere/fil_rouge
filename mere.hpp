#ifndef MERE
#define MERE
#include <iostream>
#include <string>

class Mere{
        static int compteur;
        std::string nom;

    public :
        Mere();
        ~Mere();
        Mere(std::string);

        int getAttribut(void);
        std::string getStr(void);
        virtual void afficher(void);

};

#endif