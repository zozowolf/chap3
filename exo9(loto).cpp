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
#include <stdlib.h>
#include <time.h>

using namespace std; // utilisation de l'espace de nommage
                     // de la bibliothéque standard
void loto(int *tab);
void affichage(int *tableau, int nombreDeCases);

int aleatoire(int min,int max)
{
    int val;
    
    do
    {
        val =rand();
    }while( val > max || val < min);

    return val;
}
/*======================================================
Fonction principal
========================================================*/
int main()
{
    SetConsoleOutputCP(1252);
    // code en dessous
    int tab[6];
    bool trouver;
    int alea,i,j;

    //generateur de nombre aléatoires
    srand(time(NULL)); // la serie aléatoire va changer toutes les secondes


    for ( i = 0; i < 6; i++)
    {
        do
        {
            alea = aleatoire(1,49);
            trouver = false;
            for ( j = 0; j < i - 1; j++)
            {
                if (tab[j]==alea)
                {
                    trouver=true;
                }
            }
        } while (trouver == true);
        tab[i] = alea;
    }

  
    affichage(tab, 6);

    // Attendons qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
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