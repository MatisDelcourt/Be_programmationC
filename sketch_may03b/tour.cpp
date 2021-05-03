#include <iostream>
#include <string>
#include "tour.h"
using namespace std;

tour::tour() {
    this->de1 = 0;
    this->de2 = 0;
    this->somme = 0;
    this->attente = false;
}

void tour::majtour(int lancer) {
    if (this->attente == false) {
        this->de1 = lancer;
        this->attente = true;
    }
    else {
        this->de2 = lancer;
        this->somme = this->de2 + this->de1;
        this->attente = false;
    }
}
