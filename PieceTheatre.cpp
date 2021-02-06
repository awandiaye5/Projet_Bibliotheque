#include "PieceTheatre.h"
#include <string>
#include <iostream>
using namespace std;

PieceTheatre::PieceTheatre(int code,string auteur,string titre,string editeur,string isbn,string audience, string siecle): Livre(code, auteur, titre, editeur, isbn, audience)
{
    this->siecle = siecle;
    this->categorie = "Piece Theatre";
}

void PieceTheatre::affiche()
{
    Livre::affiche();
    cout << "siecle: " << siecle <<endl;
    cout << "categorie: " << categorie <<endl;
}
