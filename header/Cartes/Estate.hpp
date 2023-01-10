#ifndef ESTATE_H
#define ESTATE_H
#include "Royaume.hpp"

class Estate : public Royaume
{
private:
    
public:
    void Estate::appliquer_effet();
    Estate(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Estate();
};




#endif