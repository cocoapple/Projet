#pragma once
#include "Joueur.h"

class Equipe
{
	//2 atributs joueur 1, 2 permmettra de stocker les deux joueurs d'une équipe
	
private:
	int points;
	Joueur* joueurs[2];

public:
	void setPoints(int points) { this->points; }
	int getPoints() { return points; }
	Joueur** getJoueur() { return joueurs; }
	void addJoueur(Joueur)
};

