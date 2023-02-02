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

	int n, i, j, carre[20][20] = { 0 }, compteur;

	// saisir n
	cout << "Saisir n (valeur impaire entre 1 et 19) : ";
	cin >> n;


	// placer le 1 au dessus de la case centrale
	j = (n / 2);
	i = (n / 2) - 1;

	carre[i][j] = 1;

	for (compteur = 2; compteur <= n * n; compteur++)
	{

		i--;
		j++;

		if (j >= n && i <0)
		{
			i--;
			j--;
		}
		
        if (j >= n)
        {
            j -= n;
        }
        if (i < 0)
        {
            i += n;
        }
		

		if (carre[i][j] != 0)
		{
			i--;
			j--;
			
            if (j == n)
            {
                j -= n;
            }
            if (i == -1)
            {
                i += n;
            }

			

		}

		carre[i][j] = compteur;
		// finsi
	}

	cout << "======================= carre magique =======================" << endl;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << carre[i][j] << "\t";
		}
		// saut de ligne quand i change
		cout << endl;
	}

	// Attendons qu'on appui sur une touche pour terminer
	cin.get();
	cin.ignore();

	return EXIT_SUCCESS;
}