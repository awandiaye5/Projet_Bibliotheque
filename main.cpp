#include <iostream>
#include <string>
#include <vector>

#include "Bibliotheque.h"
#include "Adherent.h"
#include "Album.h"
#include "Roman.h"
#include "RecueilPoesie.h"
#include "PieceTheatre.h"
#include "BandeDessinee.h"

using namespace std;

int nbre_biblio=0;
void afficher_liste_bibliotheque(int nbre_biblio);
vector<Bibliotheque*> liste_de_bibliotheque= vector<Bibliotheque*>(nbre_biblio,nullptr);
void afficher_liste_bibliotheque(int nbre_biblio){
    for(int i = 0 ; i < nbre_biblio ; ++i)
    {
        if(liste_de_bibliotheque[i] != nullptr){
            cout << (*liste_de_bibliotheque[i]).get_nom() << endl;
        }
    }
}

int main()
{
    //Partie 5: saisie utilisateur

    string type;
    string title;
    int numBiblio;
    string autor;

    Bibliotheque BU("BU","111 rue du chat",103.2, 1);
    Roman livre1(12,"Hugo","Les Miserables","Gallimard","A0845","adulte","Litterature");
    Roman livre2(27,"Dumas","Le Comte de Monte Cristo","Pocket","27hu89","jeunes adultes","Litterature");
    Album album1(87,"Dupont","Mes voyages","nouved","blablabla","enfant","photos");
    Bibliotheque BM("Municipale", "4 Privet Drive", 98.2,1);
    livre1.setEtat("libre");

    BU.acheter_livre(&livre1);
    BU.acheter_livre(&livre2);


    liste_de_bibliotheque.push_back(&BU);
    ++nbre_biblio;
    liste_de_bibliotheque.push_back(&BM);
    ++nbre_biblio;




    cout << " " << endl;
    cout << "-------Espace Lecteur-------------" << endl;

    bool continuer = true;
    int choix = 0;
    cout << "Bienvenue dans le projet bibliotheque de Lucie et Awa. Que souhaitez-vous faire?" << endl;

    while(continuer){
        cout << " "<< endl;
        cout << "1) Tests affichage livres" << endl;
        cout << "2) Tests bon fonctionnement code" << endl;
        cout << "3) Afficher la liste des livres d'une bibliotheque" << endl;
        cout << "4) Afficher la liste des livres d'une bibliotheque par categorie" << endl;
        cout << "5) Verifier la disponibilite d'un livre" << endl;
        cout << "6) Deconnexion" << endl;

        cout << "Votre choix : "<< endl;
        cin >> choix;

        switch(choix){
            case 1:
            {
                Livre l(536585, "Moliere", "Le Tartuffe", "quisait", "256-658", "Tout public");
                l.affiche();
                cout << " " << endl;

                BandeDessinee bd(998, "Sherman", "Roi Lion", "Disney", "56898", "jeunesses", "Heartherton");
                bd.affiche();
                cout << " " << endl;

                RecueilPoesie P(66556, "David Diop", "Coup de Pilon", "Presence africaine", "56266", "adulte", "Prose");
                P.affiche();
                cout << " " << endl;

                Roman R(989655, "Stendhal", "Le rouge et le noir", "quisait", "666698", "adulte", "Roman d'amour");
                R.affiche();
                cout << " " << endl;

                PieceTheatre pi(6236596, "Moliere", "Le malade imaginaire", "quisait", "9985","Tout Public", "XVIIeme");
                pi.affiche();
                cout << " " << endl;

                Album ab(55655, "PXC", "WEI2019", "Centrale", "566896", "Tout Public", "photos");
                ab.affiche();
                cout << " " << endl;

                cout << "Que souhaitez-vous faire maintenant?" << endl;
                break;
            }
            case 2:
            {
                cout << "affichage 1 --------------" << endl;
                BU.acheter_livre(&livre1);
                BU.acheter_livre(&livre2);
                BU.afficher_tous_les_livres();

                cout << " " << endl;
                cout << "affichage 2 --------------" << endl;
                BU.supprimer_livre(12);
                BU.afficher_tous_les_livres();

                cout << " " << endl;
                cout << "affichage 3 --------------" << endl;
                BU.acheter_livre(&album1);
                BU.afficher_tous_les_livres();

                cout << " " << endl;
                cout << "affichage 4 --------------" << endl;
                BM.acheter_livre(&livre1);
                livre1.setEtat("libre");
                BU.demander_livre("A0845",BM);
                BU.afficher_tous_les_livres();

                cout << " " << endl;
                cout << "affichage 5 --------------" << endl;
                livre2.setEtat("emprunt");
                album1.setEtat("libre");
                BU.afficher_emprunts_libres();

                cout << " " << endl;
                cout << "affichage 6 --------------" << endl;
                BU.afficher_livres_de_categorie("Roman");

                 cout << " " << endl;
               cout << "affichage 7 --------------" << endl;
               Bibliotheque* pt_BU = &BU;
               Adherent ad1("Ndiaye", "Awa", " 18 rue Jolio Curie", 38, pt_BU);
               ad1.emprunt(12);
               ad1.affiche();
               BU.afficher_emprunts_libres();

               cout << " " << endl;
               cout << "affichage 8 --------------" << endl;
               ad1.rendre(12);
               BU.afficher_emprunts_libres();

               cout << " " << endl;
               cout << "affichage 9 --------------" << endl;
               livre2.setEtat("libre");
               ad1.emprunt(12);
               ad1.emprunt(27);
               ad1.emprunt(87);
               PieceTheatre moliere(74,"Moliere","Le bourgeois gentilhomme","Pocket","efrtg","tout public","17e");
               BU.acheter_livre(&moliere);
               moliere.setEtat("libre");
               ad1.emprunt(74);
               ad1.affiche();

               cout << " " << endl;
               cout << "affichage 10 --------------" << endl;
               ad1.rendre(27);
               ad1.emprunt(74);
               ad1.affiche();
               cout << " " << endl;
               cout << "Que souhaitez-vous faire maintenant?" << endl;

                cout << " " << endl;
                cout << "affichage 11 --------------" << endl;
                cout << (*BU.get_Livre("Les Miserables")).getEtat() << endl;

                break;
            }
            case 3:
            {
                cout << "Voici la liste de nos bibliotheques" << endl;
                afficher_liste_bibliotheque(nbre_biblio);

                cout << "Choisissez le numero d'une bibliotheque entre 1 et " << nbre_biblio << endl;
                cin >> numBiblio;
                (*liste_de_bibliotheque[numBiblio-1]).afficher_tous_les_livres();



                cout << " " << endl;
                cout << "Que souhaitez-vous faire maintenant?" << endl;
                break;}

            case 4:
            {cout << "Voici la liste de nos bibliotheques" << endl;
                afficher_liste_bibliotheque(nbre_biblio);

                cout << "Choisissez le numero d'une bibliotheque entre 1 et" << nbre_biblio <<endl;
                cin >> numBiblio;

                cout << "Quel type de livre cherchez-vous?" << endl;
                cin >> type;
                (*liste_de_bibliotheque[numBiblio-1]).afficher_livres_de_categorie(type);


                cout << " " << endl;
                cout << "Que souhaitez-vous faire maintenant?" << endl;
                break;}

            case 5:
            {
                cout << "Quel est le nom du livre que vous souhaitez emprunter?" << endl;
                getline(cin.ignore(), title);
                cout << "" << endl;
                afficher_liste_bibliotheque(nbre_biblio);
                cout << "Choisissez le numero d'une bibliotheque entre 1 et " << nbre_biblio <<endl;
                cout << "" << endl;
                cin >> numBiblio;
                cin.ignore();
                for(int i = 0; i < (*liste_de_bibliotheque[numBiblio-1]).get_nbre_de_livres(); ++i){
                    if((*((*liste_de_bibliotheque[numBiblio-1]).get_liste_de_livres()[i])).getTitre() == title){
                        if (((*((*liste_de_bibliotheque[numBiblio-1]).get_Livre(title))).getEtat()) == "libre"){
                            cout << "Ce livre est disponible dans une de nos bibliotheques " << endl;}
                        else {cout << "Desole, ce livre a ete emprunte"<< endl;}
                    }
                }
                break;
            }

            case 6:
            {
                cout << "Merci pour votre visite !" << endl;
                continuer = 0;
                break;
            }

            default:
                cout << "Desole. Cette commande n'est pas reconnue." << endl;

                break;
        }
        cout << endl;
    }



    return 0;
}
