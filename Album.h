#ifndef PROJET_PROG_OBJET_ALBUM_H
#define PROJET_PROG_OBJET_ALBUM_H
#include "Livre.h"


class Album : public Livre
{
private:
    string illustration;
public:
    Album(int code,string auteur,string titre,string editeur,string isbn,string audience, string illustration);
    void affiche();
    string getIllustration(){
        return illustration;
    }
    void setIllustration(string illustration){
        this->illustration = illustration;
    }
};


#endif //PROJET_PROG_OBJET_ALBUM_H
