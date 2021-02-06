#include "Roman.h"

Roman::Roman(int code,string auteur,string titre,string editeur,string isbn,string audience, string genre): Livre(code, auteur, titre, editeur, isbn, audience)
{
    this->genre = genre;
    this->categorie = "Roman";
}

void Roman::affiche()
{
    Livre::affiche();
    cout << "genre: " << genre <<endl;
    cout << "categorie: " << categorie <<endl;
}
