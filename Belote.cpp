#include "Belote.h"
#include <random>
#include <iostream>



void Belote::melanger()
{
	for (int i(31); i > 0; i--)
	{
		int j = rand() % (i + 1);
		swap(&Paquet[i], &Paquet[j]);
	}
}

void Belote::distriber()
{
	for (int i(0); i < 7; i++)
	{

	}
}

Joueur** Belote::ToutJoueurs()
{
	Joueur* TousPlayer[4];
	/*int TousPlayerIndex;*/

	for (int i(0); i < 2; i++)
	{
		for (int j(0); j < 2; j++)
		{
			TousPlayer[i + j] = equipe[j].getJoueur()[i];
		}
	}

	return TousPlayer;
}

void Belote::Team()
{
	for (int i(0); i < 2; i++)
	{
		equipe[i] = Equipe();
	}
}

