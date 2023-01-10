#ifndef CARTES_H
#define CARTES_H
#include <map>

class Cartes
{
private:
    std::string nom;
    int cout;
    static std::map<Cartes*,int> reservecarte;
public:
    Cartes(std::string nom, int cout);
    ~Cartes();
    void Cartes::init_carte(int i);
};




#endif