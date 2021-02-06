#include "Livre.h"
using namespace std;

Livre::Livre(int code,string auteur,string titre,string editeur,string isbn,string audience)
{
    this->code = code;
    this->auteur = auteur;
    this->titre = titre;
    this->editeur = editeur;
    this->isbn = isbn;
    this->audience = audience;
    this->etat= etat;
}

void Livre::affiche()
{
    cout << "Titre : " << getTitre()
         << " | Auteur : "<< getAuteur()<< endl;
}
