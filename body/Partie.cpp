#include <iostream>
#include "../header/Partie.hpp"
#include <string>

Partie::Partie(std::string name)
{
    nom=name;
    std::cout<<"nouvelle partie";
}

Partie::~Partie()
{
    std::cout<<"fin de partie";
}

void Partie::demarrer_partie(){
    
}