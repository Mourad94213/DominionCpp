#ifndef SMITHY_H
#define SMITHY_H
#include "Royaume.hpp"

class Smithy : public Royaume
{
private:
    
public:
    void Smithy::appliquer_effet();
    Smithy(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~Smithy();
};




#endif