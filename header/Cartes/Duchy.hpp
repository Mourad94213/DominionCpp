#ifndef DUCHY_H
#define DUCHY_H
#include "Royaume.hpp"

class Duchy : public Royaume
{
private:
    
public:
    void Duchy::appliquer_effet();
    Duchy(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Duchy();
};




#endif