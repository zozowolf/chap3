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
#include <vector>
using namespace std; // utilisation de l'espace de nommage
					 // de la bibliothéque standard
int premier(int *tab, int n);
void saisie(int *tableau, int nombreDeCases);
void affichage(int *tableau, int nombreDeCases);
/*======================================================
Fonction principal
========================================================*/
int main()
{
	SetConsoleOutputCP(1252);
	// code en dessous
	int limit, tab[100000];

	saisie(tab, 100000);
	cout << "Entrez une limite" << endl;
	cin >> limit;

	cout << premier(tab, limit) << endl;
	affichage(tab, limit);
	// Attendons qu'on appui sur une touche pour terminer
	cin.get();
	cin.ignore();

	return EXIT_SUCCESS;
}

int premier(int *tab, int n)
{
	vector<bool> L(n + 1, true);
	for (int p = 4; p < n; p += 2)
	{
		L[p] = false;
	}
	L[1] = false;
	int i = 3;
	while ((i * i) <= n)
	{
		if (L[i])
		{
			for (int j = i * i; j < n; j += 2 * i)
			{
				L[j] = false;
			}
		}
		i++;
	}
	
	int res = 0;
	for (int i = 2; i <= n; i++)
	{
		if (L[i])
		{
			tab[res] = i;
			res++;
		}
	}

	return res;

}

void saisie(int *tableau, int nombreDeCases)
{
	for (unsigned i = 0; i < nombreDeCases; i++)
	{
		tableau[i] = i;
	}
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