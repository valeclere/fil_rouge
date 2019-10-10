#include <iostream>
#include "mere.hpp"
#include "fille.hpp"
#include <string>

int main(int, char **)
{
    Mere * pm = new Mere("jeanne");
    Fille * pf = new Fille("jeannette");
    Mere * pp = new Fille("therese");

    pm->afficher();
    pf->afficher();
    pp->afficher();

    return 0;
}