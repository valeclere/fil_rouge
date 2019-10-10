#include "mere.hpp"


int Mere::compteur = 0;

Mere::Mere(): nom("")
{
    compteur++;
    std::cout << "Construction n°" << compteur << std::endl;
}

Mere::~Mere()
{
    std::cout << "Destruction" << std::endl;
}


int Mere::getAttribut(void){
    return compteur;
}

std::string Mere::getStr(void){
    return nom;
}

Mere::Mere(std::string nom): nom(nom)
{
    compteur++;
    std::cout << "Construction n°" << compteur << std::endl;
}

void Mere::afficher(void){
    std::cout << "affichage : mere" << std::endl;
}