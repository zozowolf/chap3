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

void fibonacci(unsigned long long *tab, int n);
void affichage(unsigned long long *tableau, int nombreDeCases);
/*======================================================
Fonction principal
========================================================*/
int main()
{
    SetConsoleOutputCP(1252);
    // code en dessous
    unsigned long long tab[100] = {0, 1, 1, 2, 3, 5, 8, 13, 21};
    int val = 0;

    cout << "Entrez le nombre de terme de la suite que vous voulez , entre 10 et 100" << endl;
    cin >> val;

    if (val > 10 && val < 100)
    {
        fibonacci(tab, val);
        affichage(tab, val);
    }
    else
    {
        cout << "on a dit entre 10 et 100" << endl;
    }

    // Attendons qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

void fibonacci(unsigned long long *tab, int n)
{
    for (int i = 9; i < n; i++)
    {
        tab[i] = tab[i - 1] + tab[i - 2];
    }
}

void affichage(unsigned long long *tableau, int nombreDeCases)
{
    cout << "Contenue du tableau" << endl;
    for (unsigned i = 0; i < nombreDeCases; i++)
    {
        cout << tableau[i] << "  ";
    }
    cout << endl;
}
