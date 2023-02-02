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
    int tab2[3][4] = {{6, 9, 5, 2}, {11, 18, 14, 3}, {4, 9, 11, 15}};

    cout << "======================= 3 ligne de 4 entiers =======================" <<endl;
    // affichage de 3 ligne de 4 entiers
    for (unsigned i = 0; i < 3; i++)
    {
        for (unsigned j = 0; j < 4; j++)
        {
            cout << tab2[i][j] << "\t";
        }
        // saut de ligne quand i change
        cout << endl;
    }

    cout << "======================= 4 ligne de 3 entiers =======================" <<endl;
    // affichage de 4 ligne de 3 entiers
    for (unsigned i = 0; i < 4; i++)
    {
        for (unsigned j = 0; j < 3; j++)
        {
            cout << tab2[j][i] << "\t";
        }
        // saut de ligne quand i change
        cout << endl;
    }
    // Attendons qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}