#ifndef GOLD_H
#define GOLD_H
#include "Royaume.hpp"

class Gold : public Royaume
{
private:
    
public:
    void Gold::appliquer_effet();
    Gold(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Gold();
};




#endif