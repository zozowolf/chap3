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
int donnePosition(int *tab, int val);
/*======================================================
Fonction principal
========================================================*/
int main()
{
    SetConsoleOutputCP(1252);
    // code en dessous
    int tab[10], val, pos;
    for (unsigned i = 0; i < 10; i++)
    {
        cout << "Saisir la case de numero " << i << " ; " << endl;
        cin >> tab[i];
    }
    cout << "Entrer la valeur a chercher sa position " << endl;
    cin >> val;

    pos = donnePosition(tab, val);
    cout << val << " Ce trouve a la positon " << pos << " du tableau" << endl;

    // Attendons qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

int donnePosition(int *tab, int val)
{

    for (int i = 0; i < 10; i++)
    {
        if (tab[i] == val)
        {
            return i;
        }
    }
    return (-1);
}