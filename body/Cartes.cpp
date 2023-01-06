#include <iostream>
#include "../header/Cartes.hpp"
#include <string>


Cartes::Cartes(std::string name, int price){
    nom=name;
    cout=price;
}

Cartes::~Cartes()
{
    std::cout<<"carte suprr";
}

std::map init_carte(){
    this.reservecarte.insert(std::pair<Tresor,int>(new Tresor("Cuivre",0,1),60));
    this.reservecarte.insert(std::pair<Tresor,int>(new Tresor("Argent",3,2),40));
}