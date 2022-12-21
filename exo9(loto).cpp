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
#include <stdlib.h>

using namespace std; // utilisation de l'espace de nommage
                     // de la bibliothéque standard
void loto(int *tab);
void affichage(int *tableau, int nombreDeCases);
/*======================================================
Fonction principal
========================================================*/
int main()
{
    SetConsoleOutputCP(1252);
    // code en dessous
    int tab[5];
    loto(tab);
    affichage(tab, 6);

    // Attendons qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

void loto(int *tab)
{

    for (int i = 0; i < 6; i++)
    {
        do
        {
            tab[i] = rand() % 49 + 1;
        } while (tab[i] == tab[i - 1, i - 2, i - 3, i - 4, i - 5]);
    }
}

void affichage(int *tableau, int nombreDeCases)
{
    cout << "Contenue du tableau" << endl;
    for (unsigned i = 0; i < nombreDeCases; i++)
    {
        cout << tableau[i] << "  ";
    }
    cout << endl;
}