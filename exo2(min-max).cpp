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
void minMax(int *tab, int &min, int &max);

/*======================================================
Fonction principal
========================================================*/
int main()
{
    SetConsoleOutputCP(1252);
    // code en dessous
    int tab[10], min, max;
    for (unsigned i = 0; i < 10; i++)
    {
        cout << "Saisir la case de numero " << i << " ; " << endl;
        cin >> tab[i];
    }

    minMax(tab, min, max);
    cout << "Le minimun de ce tableau est " << min << " et le max est " << max << endl;

    // Attendons qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

void minMax(int *tab, int &min, int &max)
{
    min = tab[0];
    max = tab[0];
    for (int i = 0; i < 10; i++)
    {
        if (tab[i] < min)
        {
            min = tab[i];
        }
        else if (tab[i] > max)
        {
            max = tab[i];
        }
    }
}