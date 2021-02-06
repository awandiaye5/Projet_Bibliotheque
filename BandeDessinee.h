#ifndef PROJET_PROG_OBJET_BANDEDESSINEE_H
#define PROJET_PROG_OBJET_BANDEDESSINEE_H

#include <string>
#include "Livre.h"
#include <iostream>
using namespace std;

class BandeDessinee : public Livre
{
private:
    string dessinateur;
public:
    BandeDessinee(int code, string auteur, string titre, string editeur, string isbn, string audience, string dessinateur);
    void affiche();
    string getDessinateur(){
        return dessinateur;
    }
    void setDessinateur(string dessinateur){
        this->dessinateur = dessinateur;
    }
};

#endif //PROJET_PROG_OBJET_BANDEDESSINEE_H
