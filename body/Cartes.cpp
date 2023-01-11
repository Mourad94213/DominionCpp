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
#include "Feast.hpp"
#include "Festival.hpp"
#include "Gardens.hpp"
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
#include "Remodel.hpp"
#include "Sentry.hpp"
#include "Smithy.hpp"
#include "Spy.hpp"
#include "Thief.hpp"
#include "ThroneRoom.hpp"
#include "Vassal.hpp"
#include "Village.hpp"
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
    Cartes::reservecarte.insert(std::pair<Victoire*,int>(new Victoire("Duché",5,3),12));
    if(Joueur::getid()>2){
        Cartes::reservecarte.insert(std::pair<Victoire*,int>(new Victoire("Province",8,6),12));
    }
    else{
        Cartes::reservecarte.insert(std::pair<Victoire*,int>(new Victoire("Province",8,6),8));
    }
    Cartes::reservecarte.insert(std::pair<Victoire*,int>(new Victoire("Malédiction",0,-1),30));


    
    Cellar *Cave = new Cellar("Cellar", 2, 0, 0, 0, 1);
    Remodel *Renovation = new Remodel("Remodel", 4, 0, 0, 0, 0);
    new Mine("Mine", 4, 0, 0, 0, 0);
    new Witch("Witch", 5, 0, 0, 2, 0);
    new Moat("Moat", 5, 0, 0, 2, 0);
    new Market("Market", 2, 1, 1, 1, 1);
    new Gardens("Gardens", 6, 0, 0, 0, 0);
    new Festival("Festival", 4, 2, 1, 0, 2);
    new CouncilRoom("CouncilRoom", 5, 0, 1, 4, 0);
    new ThroneRoom("ThroneRoom", 5, 0, 0, 0, 0);
    new Smithy("Smithy", 4, 0, 0, 3, 0);
    new Laboratory("Laboratory", 4, 0, 0, 2, 1);
    new Village("Village", 5, 0, 0, 1, 2);
    new Militia("Militia", 3, 2, 0, 0, 0);
    new Bureaucrat("Bureaucrat", 3, 0, 0, 0, 0);
    new Library("Library", 2, 0, 0, 0, 0);
    new Workshop("Workshop", 5, 0, 0, 0, 0);
    new Chapel("Chapel", 3, 0, 0, 0, 0);
    new Thief("Thief", 0, 0, 0, 0, 0);
    new Feast("Feast", 4, 0, 0, 0, 0);
    new Chancellor("Chancellor", 3, 2, 0, 0, 0);
    new Adventurer("Adventurer", 6, 0, 0, 0, 0);
    new Woodcutter("Woodcutter", 3, 2, 1, 0, 0);
    new Spy("Spy", 4, 0, 0, 1, 1);
    new Bandit("Bandit", 5, 0, 0, 0, 0);
    new Sentry("Sentry", 5, 0, 0, 1, 1);
    new Artisan("Artisan", 6, 0, 0, 0, 0);
    new Merchant("Merchant", 3, 0, 0, 1, 1);
    new Vassal("Vassal", 3, 0, 0, 0, 0);
    new Harbinger("Harbinger", 3, 0, 0, 1, 1);
    new Poacher("Poacher", 4, 1, 0, 1, 1);







}