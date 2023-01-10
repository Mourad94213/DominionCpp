#include <iostream>
#include "../header/Tresor.hpp"
#include <string>

Tresor::Tresor(std::string name, int price, int val) : Cartes(name,price), valeur(val){}

