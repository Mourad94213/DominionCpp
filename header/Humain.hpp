#ifndef HUMAIN_H
#define HUMAIN_H

class Humain : public Joueur
{
private:
    std::string pseudo;
public:
    Humain(int id, std::string pseudo);
    ~Humain();
    void acheter();
    void defausser(Main M);
    void jouer_carte(Cartes C);
};

#endif
