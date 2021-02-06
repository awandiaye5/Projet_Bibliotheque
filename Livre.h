#ifndef PROJET_PROG_OBJET_LIVRE_H
#define PROJET_PROG_OBJET_LIVRE_H

#include <string>
#include <iostream>
using namespace std;

class Livre
{
protected:
    int code;
    string categorie;
    string auteur;
    string titre;
    string editeur;
    string isbn;
    string audience;
    string etat;

public:
    Livre();
    Livre(int code,string auteur,string titre,string editeur,string isbn,string audience);
    void affiche();
    int getCode(){
        return code;
    }
    string getCategorie(){
        return categorie;
    }
    string getAuteur(){
        return auteur;
    }
    string getTitre(){
        return titre;
    }
    string getEditeur(){
        return editeur;
    }
    string getIsbn(){
        return isbn;
    }
    string getAudience(){
        return audience;
    }
    string getEtat(){
        return etat;
    }
    void setCode(int code){
        this->code = code;
    }
    void setAuteur(string auteur){
        this->auteur = auteur;
    }
    void setTitre(string titre ){
        this->titre = titre;
    }
    void setEditeur(string editeur){
        this->editeur = editeur;
    }
    void setIsbn(string isbn){
        this->isbn = isbn;
    }
    void setAudience(string audience){
        this->audience = audience;
    }
    void setEtat(string etat){
        this->etat = etat;
    }


};



#endif //PROJET_PROG_OBJET_LIVRE_H
