#include "RecueilPoesie.h"
#include <string>
#include <iostream>
using namespace std;

RecueilPoesie::RecueilPoesie(int code,string auteur,string titre,string editeur,string isbn,string audience, string indicateur): Livre(code, auteur, titre, editeur, isbn, audience)
{
    this->indicateur = indicateur;
    this->categorie = "Recueil Poesie";
}

void RecueilPoesie::affiche()
{
    Livre::affiche();
    cout << "indicateur: " << indicateur <<endl;
    cout << "categorie: " << categorie <<endl;
}


