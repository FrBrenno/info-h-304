#include "list.h"

Noeud::Noeud()
{
    data = "";
    suivant = NULL;
};

Noeud::Noeud(string chaine)
{
    data = chaine;
    suivant = NULL;
}

void Noeud::setSuivant(Noeud* n)
{
    suivant = n;
};

Noeud* Noeud::getSuivant() const
{
    return suivant;
}

string Noeud::getData() const
{
    return data;
}