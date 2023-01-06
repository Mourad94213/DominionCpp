#ifndef JOUEUR_H
#define JOUEUR_H

class Joueur
{
private:
    static int id;
public:
    Joueur();
    ~Joueur();
    virtual void acheter();
    virtual void defausser(Main M);
    virtual void jouer_carte(Cartes C);
};



#endif