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
int nombreDeValeursAAjouter(double *tab, double val);
/*======================================================
Fonction principal
========================================================*/
int main()
{
	SetConsoleOutputCP(1252);
	// code en dessous
	double val;
	double tab[20] = {2.5, 6.4, 7.2, 7.5, 8.9, 11.4, 15.2, 15.5, 15.9, 17.2, 19, 19.5, 21.4, 22, 23.8, 28.9, 31.5, 32.6, 33.4, 35.1};

	cout << "Entrez une valeur" << endl;
	cin >> val;
	cout << nombreDeValeursAAjouter(tab, val) << endl;

	// Attendons qu'on appui sur une touche pour terminer
	cin.get();
	cin.ignore();

	return EXIT_SUCCESS;
}

int nombreDeValeursAAjouter(double *tab, double val)
{
	double nb = 0.0;
	for (int i = 0; i < 20; i++)
	{

		if (nb >= val)
		{
			return i;
		}
		else
		{
			nb = nb + tab[i];
		}
	}
}