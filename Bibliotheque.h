#ifndef PROJET_PROG_OBJET_BIBLIOTHEQUE_H
#define PROJET_PROG_OBJET_BIBLIOTHEQUE_H
#include <string>
#include "Livre.h"
#include <vector>
using namespace std;

class Bibliotheque {
protected:
    string nom;
    string adresse;
    float code;
    int nbre_de_livres;
    vector<Livre*> liste_de_livres = vector<Livre*>(nbre_de_livres,nullptr);

public:
    Bibliotheque(string nom, string adresse, float code,int nbre_de_livres);

    void afficher_tous_les_livres();

    void afficher_livres_de_categorie(string categorie);

    void demander_livre(string ISBN, Bibliotheque bibliotheque2);

    void acheter_livre(Livre* ptLivre);

    void supprimer_livre(int livre_code);

    void afficher_emprunts_libres();

    int get_nbre_de_livres(){
        return nbre_de_livres;
    }

    vector<Livre*> get_liste_de_livres(){
        return liste_de_livres;
    }

    Livre* get_Livre(string titre);

    string get_nom(){
        return nom;
    }
};

#endif //PROJET_PROG_OBJET_BIBLIOTHEQUE_H
