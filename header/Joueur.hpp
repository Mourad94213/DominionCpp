#ifndef JOUEUR_H
#define JOUEUR_H
#include "Main.hpp"
#include "Cartes.hpp"

class Joueur
{
private:
    static int id;
public:
    Joueur();
    ~Joueur();
    static int Joueur::getid();
    virtual void Joueur::acheter();
    virtual void Joueur::defausser(Main M);
    virtual void Joueur::jouer_carte(Cartes C);
};



#endif