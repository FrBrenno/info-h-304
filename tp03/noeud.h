#include <iostream>
#include <string>
using std::string;

class Noeud
{
private:
    string data;
    Noeud* suivant;
public:
    Noeud();
    Noeud(string chaine);
    void setSuivant(Noeud* n);
    Noeud* getSuivant() const;
    string getData() const;
};