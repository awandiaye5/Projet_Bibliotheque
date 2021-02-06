#include "Bibliotheque.h"
#include "Livre.h"
using namespace std;

Bibliotheque :: Bibliotheque(string nom, string adresse, float code,int nbre_de_livres) {
    this->nom = nom;
    this->adresse = adresse;
    this->code = code;
    this->nbre_de_livres = nbre_de_livres;
    liste_de_livres = vector<Livre*>(nbre_de_livres,nullptr);
}


void Bibliotheque :: afficher_tous_les_livres(){
    for(int i = 0 ; i < nbre_de_livres ; ++i)
    {
        if(liste_de_livres[i] != nullptr){
            (*liste_de_livres[i]).affiche();
        }
    }
}


void Bibliotheque :: afficher_livres_de_categorie(std::string categorie){
    for(int i = 0 ; i < nbre_de_livres ; ++i)
    {
        if ((*liste_de_livres[i]).getCategorie() == categorie){
            (*liste_de_livres[i]).affiche() ;
        }
    }
}



void Bibliotheque :: demander_livre(string ISBN, Bibliotheque bibliotheque2){
    for(int i = 0; i < bibliotheque2.nbre_de_livres; ++i){
        if(((*bibliotheque2.liste_de_livres[i]).getIsbn() == ISBN) && ((*bibliotheque2.liste_de_livres[i]).getEtat() == "libre")){
            acheter_livre(bibliotheque2.liste_de_livres[i]);
            bibliotheque2.supprimer_livre((*bibliotheque2.liste_de_livres[i]).getCode());
        }
    }
}

void Bibliotheque :: acheter_livre(Livre* ptLivre) {

    for(int i = 0; i < nbre_de_livres; ++i){
        if (liste_de_livres[i] == nullptr){
            liste_de_livres[i] = ptLivre;
            break;
        }
        else if ((i == nbre_de_livres-1) and liste_de_livres[i] != nullptr) {
            liste_de_livres.push_back(ptLivre); // j'utilise un pointeur pour rentrer tout l'objet livre dans la liste
            ++nbre_de_livres;
            break;
        }
    }



}

void Bibliotheque :: supprimer_livre(int livre_code){
    for(int i = 0; i < nbre_de_livres ; ++i){ //j'ai l'impression qu'il reconnais pas nbre_de_livres.  On verra en testant
        if ((*liste_de_livres[i]).getCode() == livre_code){
            liste_de_livres[i] = nullptr;
        }
    }
}

void Bibliotheque ::afficher_emprunts_libres() {
    cout << "Ces livres sont libres : " << endl;
    for(int i = 0; i < nbre_de_livres; ++i){
        if((*liste_de_livres[i]).getEtat() == "libre"){
            (*liste_de_livres[i]).affiche();
        }
    }
    cout << "Ces livres sont empruntes : " << endl;
    for(int i = 0; i < nbre_de_livres; ++i){
        if((*liste_de_livres[i]).getEtat() == "emprunt"){
            (*liste_de_livres[i]).affiche();
        }
    }
}

Livre* Bibliotheque :: get_Livre(string titre){
    for(int i = 0; i < nbre_de_livres; ++i){
        if((*liste_de_livres[i]).getTitre() == titre){
            return liste_de_livres[i];
        }
    }
}