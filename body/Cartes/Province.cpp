#include <iostream>
#include "Province.hpp"
#include <string>

Province::Province(std::string name, int price, int money, int buy, int wdraw, int acti)
    : Royaume(name,price,money,wdraw,buy,acti){}