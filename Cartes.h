#pragma once
#include <iostream>
#include <string>

using namespace std;

class Cartes
{
private:
	int Points;
	int PointsAtout;
	string NameCarte;
	string famille;

public:
	Cartes(int Points, int PointsAtout, string NameCarte, string famille) {
		this->Points = Points;
		this->PointsAtout = PointsAtout;
		this->NameCarte = NameCarte;
		this->famille = famille;
	}
	Cartes() {};
	string getNameCarte() { return NameCarte; }
	string getFamille() { return famille; }
	int getPointsAtout() { return PointsAtout; }
	int getPoints() { return Points; }
	
};

