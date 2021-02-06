#ifndef PROJET_PROG_OBJET_PIECETHEATRE_H
#define PROJET_PROG_OBJET_PIECETHEATRE_H

#include <string>
#include "Livre.h"
using namespace std;


class PieceTheatre : public Livre
{
private:
    string siecle;
public:
    PieceTheatre(int code,string auteur,string titre,string editeur,string isbn,string audience,string siecle);
    void affiche();
    string getSiecle(){
        return siecle;
    }
    void setSiecle(string siecle){
        this->siecle = siecle;
    }
};


#endif //PROJET_PROG_OBJET_PIECETHEATRE_H
