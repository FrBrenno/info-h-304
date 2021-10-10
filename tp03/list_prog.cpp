#include "list.h"
#include <fstream>
using std::ifstream;
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
    string filename = "war_and_peace.txt";
    ifstream file (filename);
    Liste liste = Liste();

    cout << "Ouverture du fichier: " << filename << endl;
    if (file.is_open())
    {   
        cout << "Fichier Ouvert" << endl;
        string mot;
        while (file >> mot)
            liste.inserer(mot);       
        file.close();
    }
    else
    {
        cout << "Impossible d'ouvrir le fichier" << endl;
        return 1;
    }

    liste.imprimerListe();
    cout << liste.getNombreNoeuds() << endl;
    return 0;

}