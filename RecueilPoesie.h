#ifndef PROJET_PROG_OBJET_RECUEILPOESIE_H
#define PROJET_PROG_OBJET_RECUEILPOESIE_H

#include <string>
#include "Livre.h"
using namespace std;

class RecueilPoesie : public Livre
{
private:
    string indicateur;
public:
    RecueilPoesie(int code,string auteur,string titre,string editeur,string isbn,string audience,string indicateur);
    void affiche();
    string getIndicateur(){
        return indicateur;
    }
    void setIndicateur(string indicateur){
        this->indicateur = indicateur;
    }

};

#endif //PROJET_PROG_OBJET_RECUEILPOESIE_H
