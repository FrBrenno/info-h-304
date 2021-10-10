#include "noeud.h"

class Liste
{
private:
    int nombreNoeuds;
    Noeud* tete;
public:
    Liste();
    ~Liste();

    void inserer(string chaine);
    void supprimer();
    void imprimerListe() const;
    int getNombreNoeuds() const;
    Noeud* getTete() const;
};