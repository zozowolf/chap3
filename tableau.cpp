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
void saisie(int *tableau, int nombreDeCases);
void affichage(int *tableau, int nombreDeCases);
/*======================================================
Fonction de saisie des vlaeurs d'un tableau d'entiers
\param tableau à remplir
\param nombre de cases du tableau
========================================================*/
void saisie(int *tableau, int nombreDeCases)
{
    for (unsigned i = 0; i < nombreDeCases; i++)
    {
        cout << "Saisir la case de numero " << i << " ; " << endl;
        cin >> tableau[i];
    }
}

/*======================================================
Fonction de affichage des vlaeurs d'un tableau d'entiers
\param tableau à remplir
\param nombre de cases du tableau
========================================================*/
void affichage(int *tableau, int nombreDeCases)
{
    cout << "Contenue du tableau" << endl;
    for (unsigned i = 0; i < nombreDeCases; i++)
    {
        cout << tableau[i] << "  ";
    }
    cout << endl;
}

/*======================================================
Fonction principal
========================================================*/
int main()
{
    SetConsoleOutputCP(1252);
    // code en dessous

    // Création d'un tableau de 5 entiers
    // Ce tableau non initialisé contient n'importe quoi au départ
    int tab1[5];

    // Création d'un tableau de 5 entiers initialisés
    int tab2[5] = {12, 7, 8, 54, 9};

    // Création d'un tableau de 5 entiers initialisés à 0
    int tab3[5] = {0};

    // Saisir au clavier des valeurs de tab1
    saisie(tab1, 5);
    affichage(tab1, 5);

    // Attendons qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}