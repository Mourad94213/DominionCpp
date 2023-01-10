#ifndef VICTOIRE_H
#define VICTOIRE_H
#include "Cartes.hpp"

class Victoire : public Cartes
{
private:
    int valeur;
public:
    Victoire(std::string name, int price, int val);
    ~Victoire();
};

#endif