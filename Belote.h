#include "Cartes.h"
#include "Fonction.h"
#include "Equipe.h"

class Belote
{
	//2 équipes
	//1 attributs pour l'équipe 1 et un pour l'équipe 2

	// un autre vecteur pour stocker les cartes non mélangé et un autre ou il y'a les cartes mélangé	
	//et un autre vecteur qui contient les cartes distribuées

	//fonction sur internet qui vecteur mélanger (mixt, blend, shuffle)

	//Attributs :
private:
	Cartes Paquet[32];
	Equipe equipe[2];


public:
	
	void melanger();
	void distriber();
	Joueur** ToutJoueurs();

	void Team();


	//Constructeurs :

	//Destructeurs :

	//Méthode :
	
};

