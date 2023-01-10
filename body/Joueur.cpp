#include <iostream>
#include "Joueur.hpp"
#include <string>

int Joueur::id=0;

Joueur::Joueur(){
    id++;
}

Joueur::~Joueur(){
    std::cout<<"joueur suppr";
}

int Joueur::getid(){
    return id;
}


