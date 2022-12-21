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
/*======================================================
Fonction de saisie des vlaeurs d'un tableau d'entiers
\param tableau à remplir
\param nombre de cases du tableau
========================================================*/

double mediane(double *tab, int n);
/*======================================================
Fonction principal
========================================================*/
int main()
{
    SetConsoleOutputCP(1252);
    // code en dessous
    double tab1[] = {2.5, 9.8, 15.6, 21.4, 27.9}, tab2[] = {2.5, 9.8, 15.6, 21.4, 26.6, 27.9};
    int n1 = 5, n2 = 6;

    cout << "Tableau 1 , mediane = " << mediane(tab1, n1) << endl;
    cout << "Tableau 2 , mediane = " << mediane(tab2, n2) << endl;

    // Attendons qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

double mediane(double *tab, int n)
{
    if (n % 2 != 0)
    {
        return tab[n % 2 + 1];
    }
    else
    {
        return (tab[n / 2] + tab[n / 2 - 1]) / 2;
    }
}