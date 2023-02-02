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
int recherche(char * chaine1 , char *chaine2);
/*======================================================
Fonction principal
========================================================*/
int main()
{
    SetConsoleOutputCP(1252);
    // code en dessous
    char chaine[100 + 1], cherche[100 + 1];

    cout << "Saisir une phrase :" << endl;
    gets(chaine);

    cout << "Saisir le mot a rechercher dans la phrase :" << endl;
    gets(cherche);


    if(recherche(chaine,cherche)!=-1)
    cout<<"Le mot "<< cherche<< "se trouve à la position " << recherche(chaine,cherche)<< " dans la phrase" << endl;
    else 
    cout<<"erreur"<<endl;

    
    // Attendons qu'on appui sur une touche pour terminer
    cin.get();
    cin.ignore();

    return EXIT_SUCCESS;
}

int recherche(char * chaine1 , char *chaine2)
{

    int f=0,memo=0,j=0;

    do
    {
        f++;
    } while (chaine1[f] != '\0');
    
    
    for(int i=0;i<f;i++)
    {
        memo=i;
        while(chaine1[i]==chaine2[j])
        {
            
            i++;
            j++;
            if(chaine2[j]=='\0')
            {
                return memo;
            }
        }
        j=0;
        i=memo;

    }
    return -1;

}