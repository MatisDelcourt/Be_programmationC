#pragma once
#ifndef _partie_h
#define _partie_h
#include <iostream>
#include <vector> 
#include <string>
#include "joueur.h"
#include "regles.h"
#include "tour.h"

using namespace std;

class partie {
public:
	partie();


	int actif[4];
	int nbreglesinactives = 0;
	int nbjoueurs;
	regles mesregles;
	vector<joueur> tabjoueur;

	void majpartie(tour tr, int joueur);
};

#endif