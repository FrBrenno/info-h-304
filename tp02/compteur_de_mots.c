#include <stdio.h>
#define LONGMAX 50

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("Erreur: ajouter un argument\n");
        return 1;
    }
    printf("Ouverture du fichier: %s\n", argv[1]);
    FILE* file;
    if ((file = fopen(argv[1], "r+")) == NULL)
    {
        printf("Impossible d'ouvrir le fichier\n");
        return 2;
    }
    printf("Fichier valide\n");

    int compte=0;
    char mot[LONGMAX];
    while ((fscanf(file, "%s", mot)) != EOF) ++compte;
    
    fprintf(file, "\nNombre de mots: %i\n", compte);

    fclose(file);
    printf("Nombre de mots dans le fichier: %d \n", compte);
    return 0;
}