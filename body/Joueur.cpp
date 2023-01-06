#include <iostream>
#include "../header/Joueur.hpp"
#include <string>

Joueur::id=0;

Joueur::Joueur(){
    id++;
}

Joueur::~Joueur(){
    std::cout<<"joueur suppr";
}

