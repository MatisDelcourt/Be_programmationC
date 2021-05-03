#include <iostream>
#include <string>
#include "joueur.h"
using namespace std;

joueur::joueur(int nojoueur, string nomjoueur, int nrole) {
	this->no = nojoueur;
	this->nom = nomjoueur;
	this->role = nrole;
}

joueur::joueur(const joueur & copied_joueur) {
	this->no = copied_joueur.no;
	this->nom = copied_joueur.nom;
	this->role = copied_joueur.role;

}
