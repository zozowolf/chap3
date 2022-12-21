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
Fonction
========================================================*/
int nbValPaires(int *tab);

void saisie(int *tableau, int nombreDeCases);

/*======================================================
Fonction principal
========================================================*/
int main()
{
    SetConsoleOutputCP(1252);
    // code en dessous
    int tab[10] = {12, 55, 58, 23, 22, 11, 9, 88, 2, 4};

    cout << "Il y a donc " << nbValPaires(tab) << " valeurs paires" << endl;

    // Attendons qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

int nbValPaires(int *tab)
{
    int val = 0;
    for (int i = 0; i < 10; i++)
    {
        if (tab[i] % 2 == 0)
        {
            val++;
        }
    }
    return val;
}
