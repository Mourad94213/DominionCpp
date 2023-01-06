#include <iostream>
#include "../header/Malediction.hpp"
#include <string>

Malediction::Malediction(std::string name, int price, int val):
    Cartes(name,price), valeur(val){}