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
#include <string.h>

using namespace std; // utilisation de l'espace de nommage
                     // de la bibliothéque standard
void decompose(char *cheminAvecFichier, char *repertoire, char *fichier);
/*======================================================
Fonction principal
========================================================*/
int main()
{
    SetConsoleOutputCP(1252);
    // code en dessous
    char chaine[100 + 1], fic[100 + 1], rep[100 + 1];

    cout << "Saisir une phrase :" << endl;
    gets(chaine);

    decompose(chaine, rep, fic);
    cout<< rep <<" et "<< fic << endl;
    // Attendons qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

void decompose(char *cheminAvecFichier, char *repertoire, char *fichier)
{
    int memo, i = 0,j=0;
    do
    {
        i++;
    } while (cheminAvecFichier[i] != '\0');
    i--;
    while (cheminAvecFichier[i] != '\\')
    {
        i--;
    }

    memo = i;
    for (int j = 0; j < i + 1; j++)
    {
         repertoire[j] = cheminAvecFichier[j];
    }
       

    repertoire[i + 1] = '\0';
    j = -1;
    while (fichier[j] != '\0')
    {
        j++;
        fichier[j] = cheminAvecFichier[memo + 1];
        memo++;
        
    } 
    
    
}