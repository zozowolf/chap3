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
#include <stdio.h>
#include <string.h>

using namespace std; // utilisation de l'espace de nommage
                     // de la bibliothéque standard

/*======================================================
Fonction principal
========================================================*/
int main()
{
    SetConsoleOutputCP(1252);
    // code en dessous

    // declaration d'un tableau a 2 dimensions
    int triangle[200][200], limit = 1, n;
    unsigned i, j;

    // saisir n
    cout << "Saisir n : ";
    cin >> n;

    // etape 1: mettre des 1 dans la 1ere colonne ( on s'arrete a n )

    for (i = 0; i <= n; i++)
    {
        triangle[i][0] = 1;
    }
    // etape 2: mettre des 1 sur les diagonale

    for (i = 1; i <= n; i++)
    {
        triangle[i][i] = 1;
    }

    // etape 3: mettre les cases internes

    for (i = 2; i <= n; i++)
    {
        for (j = 1; j <= i - 1; j++)
        {
            triangle[i][j] = triangle[i - 1][j] + triangle[i - 1][j - 1];
        }
    }

    // etape 4: afficher le triangle
    
    cout << endl;
    cout << "======================= triangle de Pascal =======================" << endl;
    // affichage de 3 ligne de 4 entiers
    for (i = 0; i <= n; i++)
    {

        for (j = 0; j <= i; j++)
        {

            cout << triangle[i][j] << "\t";
        }

        // saut de ligne quand i change
        cout << endl;
    }

    // Attendons qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}