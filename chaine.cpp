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
	
    char chaine[]= "TOTO",
        mot[50+1],
        phrase[200+1];

    //changer une chaine de caracteres
    cout << chaine << endl;
    chaine[1]='A';
    chaine[3]=65;
    cout << chaine << endl;


    //saisie d'une chaine de caracteres au clavier 
    cout << "Saisir un mot :"<<endl;
    cin>> mot;
    cout << "le mot saisi est : " << mot << endl;

    //Vider le buffer clavier
    cin.seekg(0, ios::end);cin.clear();
    
    //saisie d'une chaine de caracteres au clavier 
    cout << "Saisir une phrase  :"<<endl;
    gets(phrase);
    cout << "La phrase saisie est : " << phrase << endl;

	// Attendons qu'on appui sur une touche pour terminer
	cin.get();
	cin.ignore();

	return EXIT_SUCCESS;
}