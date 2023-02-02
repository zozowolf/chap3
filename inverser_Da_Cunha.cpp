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
	
    char chaine[100+1],tmp;
    int i=0 , j=0;
    
    /*Saisir la chiane au clavier 
    ...
    
    positionner correctement i et j au départ 
        pour initialiser j, il faut incrémenter j tant qu'on ne tombe pas
        sur la marque de fin de chaine puis remonter j d'un cran 
    
    reperter
        inverser la case de i et la case j
        descendre i
        remonter j 
    tant que i et j ne se croisent pas */

    cout << "Saisir une phrase :"<<endl;
    gets(chaine);

    do
    {
        j++;
    }while(chaine[j]!='\0');
    
    j--;
    do{

        tmp=chaine[j];
        chaine[j]=chaine[i];
        chaine[i]=tmp;

        i++;
        j--;
    }while(i!=j);

    
    cout << "le mot inverser est :" << chaine << endl;



	// Attendons qu'on appui sur une touche pour terminer
	cin.get();
	cin.ignore();

	return EXIT_SUCCESS;
}