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
bool supprime(int *tab, int val, int n);
void affichage(int *tableau, int nombreDeCases);
/*======================================================
Fonction principal
========================================================*/
int main()
{
    SetConsoleOutputCP(1252);
    // code en dessous
    int tab[] = {5, 9, 4, 2, 8, 11, 3, 1, 22, 7};
    int n = 10, val;

    cout << "Entrez une valeur a supprimer dans le tableau" << endl;
    cin >> val;

    if (supprime(tab, val, n) == 1)
    {
        affichage(tab, n);
    }
    else
    {
        cout << "La valeur n'est pas dans le tableau" << endl;
    }

    // Attendons qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

bool supprime(int *tab, int val, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (tab[i] == val)
        {
            for (i; i < n; i++)
            {
                tab[i] = tab[i + 1];
            }
            tab[n - 1] = 0;
            return true;
        }
    }
    return false;
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