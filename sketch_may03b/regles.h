#pragma once
#ifndef _regles_h
#define _regles_h
#include <iostream>
#include <string>
#include <vector>
#include "joueur.h"
#include "tour.h"


using namespace std;

class regles {
public:
	regles();
	int changerregles(int tableau[4], tour tr, vector<joueur> tabjoueur, int nojoueur);

};

#endif
