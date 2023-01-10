#ifndef ROYAUME_H
#define ROYAUME_H
#include "Cartes.hpp"

class Royaume : public Cartes /*ABSTRACT*/
{
    private:
        int action;
        int achat;
        int argent;
        int pioche;
    public:
        Royaume(std::string name, int price, int money, int buy, int wdraw, int acti);
        ~Royaume();
        virtual void Royaume::appliquer_effet();
};




#endif