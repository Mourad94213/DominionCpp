#ifndef IA_H
#define IA_H

class IA : public Joueur
{
private:

public:
    IA(int id);
    ~IA();
    void acheter();
    void defausser(Main M);
    void jouer_carte(Cartes C);
};


#endif