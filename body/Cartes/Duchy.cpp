#include <iostream>
#include "Duchy.hpp"
#include <string>

Duchy::Duchy(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name,price,money,wdraw,buy,acti){}