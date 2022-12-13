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

using namespace std; // utilisation de l'espace de nommage
                     // de la bibliothéque standard
void fusion(int *tab1, double *tab2, double *tabFinal);
void affichage(double *tableau, int nombreDeCases);
/*======================================================
Fonction principal
========================================================*/
int main()
{
    SetConsoleOutputCP(1252);
    // code en dessous
    int tab1[] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
    double tab2[] = {1.2, 3.4, 5.6, 7.8, 9.2, 11.4, 13.6, 15.8, 17.2, 19.4}, tabfinal[20];

    fusion(tab1, tab2, tabfinal);
    affichage(tabfinal, 20);
    // Attendons qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

void fusion(int *tab1, double *tab2, double *tabFinal)
{
    int n = 0;
    for (int i = 0; i < 20; i++)
    {
        if (tab1[i] > tab2[i])
        {
            tabFinal[n] = tab2[i];
            tabFinal[n + 1] = tab1[i];
        }
        else if (tab1[i] < tab2[i])
        {
            tabFinal[n] = tab1[i];
            tabFinal[n + 1] = tab2[i];
        }
        else if (tab1[i] == tab2[i])
        {
            tabFinal[n] = tab1[i];
            tabFinal[n + 1] = tab2[i];
        }
        n += 2;
    }
}

void affichage(double *tableau, int nombreDeCases)
{
    cout << "Contenue du tableau" << endl;
    for (unsigned i = 0; i < nombreDeCases; i++)
    {
        cout << tableau[i] << "  ";
    }
    cout << endl;
}