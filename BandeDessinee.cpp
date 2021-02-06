#include "BandeDessinee.h"
#include <string>
#include <iostream>
using namespace std;

BandeDessinee::BandeDessinee(int code,string auteur,string titre,string editeur,string isbn,string audience, string dessinateur): Livre(code, auteur, titre, editeur, isbn, audience)
{
    this->dessinateur = dessinateur;
    this->categorie = "BD";
}

void BandeDessinee::affiche()
{
    Livre::affiche();
    cout << "dessinateur: " << dessinateur <<endl;
    cout << "categorie: " << categorie <<endl;
}
