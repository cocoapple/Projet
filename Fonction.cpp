#include <iostream>
#include <string>
#include "Cartes.h"
#include "Fonction.h"

using namespace std;

void genererCartes(Cartes LeTas[32])
{
    string famille[4] = { "Carreau", "Coeur", "Trefle", "Pique" };
    string nomCartes[8] = { "As", "Dix", "Roi", "Dame", "Valet", "Neuf", "Huit", "Sept" };
    int pointCartes[8] = { 11, 10, 4, 3, 2, 0, 0, 0 };
    int pointCartesAtt[8] = { 11, 10, 4, 3, 20, 14, 0, 0 };


    int leTasIndex(0);
    for (int i(0); i < 4; i++)
    {
        for (int carteIndex(0); carteIndex < 8; carteIndex++)
        {
            LeTas[leTasIndex] = Cartes(pointCartes[carteIndex], pointCartesAtt[carteIndex], nomCartes[carteIndex], famille[i]);
            leTasIndex++;
        }
        
    }
}

string determineatout() {
    
    string famille[4] = { "Carreau", "Coeur", "Trefle", "Pique" };

    for (int i(0); i < 4; i++)
    {
        cout << i + 1 << " : " << famille[i] << endl;
    }
    cout << "Selectionner la famille qui sera l'atout : " << endl;
    
    int choix;
    cin >> choix;
    if (0 <= choix - 1 && choix -1 < 4)
    {
        return famille[choix-1];
    }
    return determineatout();
}

void affichageCartesAvecPoints(Cartes Tas[32], string atout) {

    for (int i(0); i < 32; i++)
    {
        if (Tas[i].getFamille() == atout)
        {
            cout << "*";
        }
        cout << Tas[i].getNameCarte();
        cout << Tas[i].getFamille();

        int pointCartes[8] = { 11, 10, 4, 3, 2, 0, 0, 0 };
        int pointCartesAtt[8] = { 11, 10, 4, 3, 20, 14, 0, 0 };
       
        //Faire en sorte qu'à la fin de chaque famille il y'ai deux saut de ligne pour que ce soit plus aéré (améliorer la présentation)
            if (Tas[i].getFamille() == atout)
            {
                cout << Tas[i].getPointsAtout();
            }
            else
            {
                cout << Tas[i].getPoints();
            }
            cout << endl;
    }
}

void swap(Cartes* a, Cartes* b)
{
    Cartes tmp=*a;
    *a = *b;
    *b = tmp;
}

