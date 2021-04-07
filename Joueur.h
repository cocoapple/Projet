#pragma once
#include <cstring>
#include "Cartes.h"
#include <vector>

class Joueur
{
private:
	string prenom;
	vector<Cartes> CartesMain;

	//Le nom, une liste avec des vecteur liste de cartes 
	//un vecteur qui contient une liste de cartes
	
public:
	//Constructeur :
	Joueur(string prenom) {}
	vector<Cartes> getCartesMain() { return CartesMain; }
	void addCartes(Cartes NewCarte) { CartesMain.push_back(NewCarte); }
	void choisiCarteBOT();
	void choisiCarte();

	std::string getPrenom() { return prenom; }
};

