#ifndef SILVER_H
#define SILVER_H
#include "Royaume.hpp"

class Silver : public Royaume
{
private:
    
public:
    void Silver::appliquer_effet();
    Silver(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Silver();
};




#endif