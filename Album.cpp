#include "Album.h"
#include <string>
#include <iostream>
using namespace std;

Album::Album(int code,string auteur,string titre,string editeur,string isbn,string audience, string illustration): Livre(code, auteur, titre, editeur, isbn, audience)
{
    this->illustration = illustration;
    this->categorie = "Album";
}

void Album::affiche()
{
    Livre::affiche();
    cout << "illustration: " << illustration <<endl;
    cout << "categorie: " << categorie <<endl;
}

