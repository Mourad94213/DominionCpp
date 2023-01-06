#include <iostream>
#include "../header/Victoire.hpp"
#include <string>

Victoire::Victoire(std::string name, int price, int val):
    Cartes(name,price), valeur(val){}