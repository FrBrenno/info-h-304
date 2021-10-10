#include "list.h"

noeud* creer_noeud(char* data)
{
    noeud* nouveau_noeud = malloc(sizeof(noeud));
    nouveau_noeud->data = malloc(sizeof(strlen(data)+1));
    strcpy(nouveau_noeud->data, data);    
    nouveau_noeud->suivant = NULL;
    return nouveau_noeud; 
};


noeud* inserer_noeud(char* data, noeud* tete)
{
    noeud* nouveau_tete = creer_noeud(data);
    nouveau_tete->suivant = tete;
    return nouveau_tete;
};

noeud* supprimer_noeud(noeud* tete)
{
    if (tete == NULL)
        return NULL;
    else
    {
        noeud* nouvelle_tete = tete->suivant;
        free(tete->data);
        free(tete);
        return nouvelle_tete;
    }
};

void imprimer_liste(noeud* tete)
{   
    if (tete == NULL)
        printf("Liste Vide\n");
    else
    {
        while (tete != NULL)
        {
            printf("%s\n", tete->data);
            tete = tete->suivant;
        }
    }
};

