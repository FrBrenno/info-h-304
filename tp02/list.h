#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct noeud_t
{
    char* data;
    struct noeud_t* suivant;
} noeud;

noeud* creer_noeud(char* data);

noeud* inserer_noeud(char* data, noeud* tete);

noeud* supprimer_noeud(noeud* tete);

void imprimer_liste(noeud* tete);