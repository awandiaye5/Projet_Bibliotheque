#ifndef PROJET_PROG_OBJET_ADHERENT_H
#define PROJET_PROG_OBJET_ADHERENT_H

#include <string>
#include "Bibliotheque.h"
#include "Livre.h"

class Adherent {

protected:
    string nom;
    string prenom;
    string adresse;
    int numero_adherent;
    Bibliotheque* biblio;
    const static int nbre_emprunts_max;
    Livre** emprunts;

public:
    Adherent(string nom, string prenom, string adresse, int numero_adherent, Bibliotheque* bibliotheque_ad);

    ~Adherent();

    void emprunt(int livre_code);

    void rendre(int livre_code);

    void affiche();

};


#endif //PROJET_PROG_OBJET_ADHERENT_H
