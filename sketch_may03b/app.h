#pragma once
#ifndef _app_h
#define _app_h
#include <iostream>
#include <string>
#include "partie.h"
#include "tour.h"
#include "de.h"
using namespace std;

class app {

public:
	app();
	void jeu();
	partie mapartie;
	int nojoueur = 0;
	tour tr;
	de de;

private:
	int nbrtours = 0;
	int nbjoueurs = 0;



};

#endif
