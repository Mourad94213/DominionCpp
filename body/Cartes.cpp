#include <iostream>
#include "Joueur.hpp"
#include "Cartes.hpp"
#include "Tresor.hpp"
#include "Victoire.hpp"
#include "Royaume.hpp"
#include <string>
#include <utility>
#include "Adventurer.hpp"
#include "Artisan.hpp"
#include "Bandit.hpp"
#include "Bureaucrat.hpp"
#include "Cellar.hpp"
#include "Chancellor.hpp"
#include "Chapel.hpp"
#include "CouncilRoom.hpp"
#include "Copper.hpp"
#include "Curse.hpp"
#include "Duchy.hpp"
#include "Estate.hpp"
#include "Feast.hpp"
#include "Festival.hpp"
#include "Gardens.hpp"
#include "Gold.hpp"
#include "Harbinger.hpp"
#include "Laboratory.hpp"
#include "Library.hpp"
#include "Market.hpp"
#include "Merchant.hpp"
#include "Militia.hpp"
#include "Mine.hpp"
#include "Moat.hpp"
#include "Moneylender.hpp"
#include "Poacher.hpp"
#include "Province.hpp"
#include "Remodel.hpp"
#include "Sentry.hpp"
#include "Silver.hpp"
#include "Smithy.hpp"
#include "Spy.hpp"
#include "Thief.hpp"
#include "ThroneRoom.hpp"
#include "Vassal.hpp"
#include "Witch.hpp"
#include "Woodcutter.hpp"
#include "Workshop.hpp"







Cartes::Cartes(std::string name, int price){
    nom=name;
    cout=price;
}

Cartes::~Cartes()
{
    std::cout<<"carte suprr";
}

void Cartes::init_carte(int i){
    Cartes::reservecarte.insert(std::pair<Tresor*,int>(new Tresor("Cuivre",0,1),60));
    Cartes::reservecarte.insert(std::pair<Tresor*,int>(new Tresor("Argent",3,2),40));
    Cartes::reservecarte.insert(std::pair<Tresor*,int>(new Tresor("Or",6,3),30));
    Cartes::reservecarte.insert(std::pair<Victoire*,int>(new Victoire("Domaine",2,1),24));
    Cartes::reservecarte.insert(std::pair<Victoire*,int>(new Victoire("Duchy",5,3),12));
    if(Joueur::getid()>2){
        Cartes::reservecarte.insert(std::pair<Victoire*,int>(new Victoire("Province",8,6),12));
    }
    else{
        Cartes::reservecarte.insert(std::pair<Victoire*,int>(new Victoire("Province",8,6),8));
    }
    Cartes::reservecarte.insert(std::pair<Victoire*,int>(new Victoire("Malédiction",0,-1),30));
    new Adventurer("Adventurer",6, 0, 0, 0, 0);
    new Cellar("Adventurer", 2, 0, 0, 0, 1);
    new Remodel("Remodel", 4, 0, 0, 0, 0);
    new Moneylender("Moneylender", 4, 0, 0, 0, 0);

}