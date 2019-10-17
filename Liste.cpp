#include "Liste.hpp"

int Liste::compteur=0;

Liste::Liste(): nb_r(0), nb_c(0)
{}

void Liste::Ajouter(Cercle c){
    compteur++;
    nb_c++;

    c.setOrdre(compteur-1);
    cercles[nb_c-1]=c;
}

void Liste::Ajouter(Rectangle r){
    compteur++;
    nb_r++;

    r.setOrdre(compteur-1);
    rectangles[nb_r-1]=r;
}

int Liste::getNbC(){
    return nb_c;
}

int Liste::getNbR(){
    return nb_r;
}

std::string Liste::toString(){
    int courC=0;
    int courR=0;
    std::string Chaine="";

    for (int i=0; i=compteur-1; i++)
    {
        if ((cercles[courC].getOrdre()==i) && (i<taille)){
            Chaine+=cercles[courC].toString()+" ";
            courC++;
        }

        else{
            Chaine+=rectangles[courR].toString()+" ";
            courR++;
        }
    }
    return Chaine;
}