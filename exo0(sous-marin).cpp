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

/*======================================================
Fonction principal
========================================================*/
int main()
{
    SetConsoleOutputCP(1252);
    // code en dessous

    double profondeur[] = {-112, -125, -120, -128, -150, -100, -110};

    for (unsigned i = 1; i <= 6; i++)
    {
        // je compare la case i avec la case i-1
        if (profondeur[i] > profondeur[i - 1])
        {
            cout << "Monte" << endl;
        }
        else if (profondeur[i] < profondeur[i - 1])
        {
            cout << "Descend" << endl;
        }
        else
        {
            cout << "Immobile" << endl;
        }
    }

    // Attendons qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}
