#include "Adherent.h"
#include "Bibliotheque.h"
#include "Livre.h"

int const Adherent :: nbre_emprunts_max = 3;

Adherent ::Adherent(string nom, string prenom, string adresse, int numero_adherent, Bibliotheque* bibliotheque_ad) {
    this->nom = nom;
    this->prenom = prenom;
    this->adresse = adresse;
    this->numero_adherent = numero_adherent;
    this->biblio = bibliotheque_ad;
    emprunts = new Livre*[nbre_emprunts_max];
    for (int i = 0; i < nbre_emprunts_max; ++i){
        emprunts[i] = nullptr;
    }
}

Adherent :: ~Adherent() {
    delete[] emprunts;
}


void Adherent ::emprunt(int livre_code) {
    for (int i = 0; i < (*biblio).get_nbre_de_livres(); ++i){
        if(((*((*biblio).get_liste_de_livres())[i]).getCode() == livre_code) && ((*((*biblio).get_liste_de_livres())[i]).getEtat() == "libre")){
            for (int k = 0; k < nbre_emprunts_max; ++k){
                if (emprunts[k] == nullptr){
                    emprunts[k] = (*biblio).get_liste_de_livres()[i];
                    (*((*biblio).get_liste_de_livres())[i]).setEtat("emprunt");
                    break;
                }
            }
        }
    }


}


void Adherent ::rendre(int livre_code) {
    for (int i = 0; i < nbre_emprunts_max ; ++i){
        if((*emprunts[i]).getCode() == livre_code){
            emprunts[i] = nullptr;
            break;
        }
    }

    for (int k = 0; k < (*biblio).get_nbre_de_livres(); ++k){
        if((*((*biblio).get_liste_de_livres())[k]).getCode() == livre_code){
            (*((*biblio).get_liste_de_livres())[k]).setEtat("libre");
        }
    }
}


void Adherent ::affiche() {
    for(int i = 0; i < nbre_emprunts_max; ++i){
        if(emprunts[i] != nullptr){
            (*emprunts[i]).affiche();
        }
    }

}