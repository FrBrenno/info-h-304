#include "list.h"
using std::cout;
using std::endl;

Liste::Liste()
{
    nombreNoeuds = 0;
    tete = NULL;
}

Liste::~Liste()
{
    while (tete != NULL)
        supprimer();
}

void Liste::inserer(string chaine)
{
    Noeud* nouvelle_tete = new Noeud(chaine);
    nouvelle_tete->setSuivant(tete);
    tete = nouvelle_tete;
    nombreNoeuds++;
}

void Liste::supprimer()
{
    if (tete != NULL)
    {
        Noeud* nouvelle_tete = tete->getSuivant();
        delete tete;
        tete = nouvelle_tete;
        nombreNoeuds--;
    }
    else
        cout << "Cette liste est déjà vide!" << endl;
}

void Liste::imprimerListe() const
{
    int i = 0;
    Noeud* tmp = tete;

    while (tmp != NULL)
    {
        string data = tmp->getData();
        cout<< "DATA: "<< data << endl;
        Noeud* suivant = tmp->getSuivant();
        tmp = suivant;
    };   
}

int Liste::getNombreNoeuds() const
{
    return nombreNoeuds;
}

Noeud* Liste::getTete() const
{
    return tete;
}
