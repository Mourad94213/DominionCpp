#ifndef PROVINCE_H
#define PROVINCE_H
#include "Royaume.hpp"

class Province : public Royaume
{
private:
    
public:
    void Province::appliquer_effet();
    Province(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Province();
};




#endif