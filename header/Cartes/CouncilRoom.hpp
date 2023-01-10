#ifndef CONCILROOM_H
#define CONCILROOM_H
#include "Royaume.hpp"

class ConcilRoom : public Royaume
{
private:
    
public:
    void ConcilRoom::appliquer_effet();
    ConcilRoom(std::string name, int price, int money, int buy, int wdraw, int acti);
    ~ConcilRoom();
};





#endif