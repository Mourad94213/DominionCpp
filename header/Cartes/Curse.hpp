#ifndef CURSE_H
#define CURSE_H
#include "Royaume.hpp"

class Curse : public Royaume
{
private:
    
public:
    void Curse::appliquer_effet();
    Curse(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Curse();
};





#endif