#ifndef PROJET_PROG_OBJET_ROMAN_H
#define PROJET_PROG_OBJET_ROMAN_H

#include "Livre.h"

class Roman : public Livre
{
private:
    string genre;
public:
    Roman(int code, string auteur, string titre, string editeur, string isbn, string audience, string genre);
    void affiche();
    string getGenre(){
        return genre;
    }
    void setGenre(string genre){
        this->genre = genre;
    }
};

#endif //PROJET_PROG_OBJET_ROMAN_H
