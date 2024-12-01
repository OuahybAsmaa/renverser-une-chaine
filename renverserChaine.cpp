// renverserChaine.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

int main()
{
	cout << "exercice 1 de l'insertion d'un vecteur avec le temps d'execution" << endl;
	auto start = chrono::high_resolution_clock::now();
	vector <int> a;
	for (int i = 0; i < 10; i++)
	{
		a.push_back(i);//ajouter a la fin de de a la valeur i
	}
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << ' ';//affichage de valeur avec un espac avant chaque valeur
	}
	cout << "fin de programme" << endl;
	// Arrêter le chronomètre et calculer la durée
	auto end = chrono::high_resolution_clock::now();
	chrono::duration<double> t = end - start; // Durée en secondes

	// Afficher le temps d'exécution
	cout << "Temps d'execution : " << t.count() << " secondes." << endl;




	cout << endl;
	cout << endl;
	cout << "exercice 2 de la renvertion d'une chiane" << endl;
	vector<char> chaine;
	string input;
	cout << "saisi une chaine : ";
	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		chaine.push_back(input[i]);
	}
	for (int i = chaine.size() - 1; i >= 0; i--) // Boucle de la fin vers le début
	{
		cout << chaine[i]; // Afficher chaque caractère dans chaine[0] à l'envers
	}

	return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
