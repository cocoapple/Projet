#include "Cartes.h"
#include "Fonction.h"
#include "Equipe.h"

class Belote
{
	//2 �quipes
	//1 attributs pour l'�quipe 1 et un pour l'�quipe 2

	// un autre vecteur pour stocker les cartes non m�lang� et un autre ou il y'a les cartes m�lang�	
	//et un autre vecteur qui contient les cartes distribu�es

	//fonction sur internet qui vecteur m�langer (mixt, blend, shuffle)

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

	//M�thode :
	
};

