#ifndef TRESOR_H
#define TRESOR_H
#include "Cartes.hpp"

class Tresor : public Cartes
{
private:
    int valeur;
public:
    Tresor(std::string name, int price, int val);
    ~Tresor();
};

#endif
