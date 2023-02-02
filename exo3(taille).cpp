/*======================================================
 programme élementaire en C++
 Auteur: Da Cunha Enzo
 Date:../../2022
 version:1.0
========================================================*/

// iostream contient la déclaration des fonctions
// d'entrée/sortie que je vais utiliser
#include <iostream> // entete de gestion des E/S
#include <windows.h>
#include <string.h>

using namespace std; // utilisation de l'espace de nommage
                     // de la bibliothéque standard
int taille(char *chaine, char &caractere, int &position);
/*======================================================
Fonction principal
========================================================*/
int main()
{
    SetConsoleOutputCP(1252);
    // code en dessous
    char chaine[100 + 1], carac;
    int pos = 0, resultat;

    cout << "Saisir une liste de caractere :" << endl;
    gets(chaine);

    

    resultat = taille(chaine, carac, pos);

    cout << resultat << " caracteres identiques se trouvent a partir de la position " << pos << endl;

    // Attendons qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

int taille(char* chaine, char& caractere, int& position)
{
    int i, f = 0, longueur = 0, memo = 0, rep = 0;

    do
    {
        f++;
    } while (chaine[f] != '\0');

    f--;

    for (int i = 0; i < f; i++)
    {
        memo = i;

        caractere = chaine[i];

        while (chaine[i] == caractere)
        {
            i++;

            longueur++;
        }

        if (longueur > rep)
        {
            position = memo;

            rep = longueur;
        }
        longueur = 0;

        i = memo;
    }

    return rep;
}