#include <iostream>
#include <string>
#include "app.h"
using namespace std;

app::app() {

    Serial.println("Nombre de tours de la partie : ");
    cin >> this->nbrtours;

    string nomjoueur;
    int nombrejoueurs;
    int j;
    Serial.println("nombre de joueurs : ");
    Serial.read(nombrejoueurs);
    Serial.println(nombrejoueurs);

    this->nbjoueurs = nombrejoueurs;


    for (j = 1; j <= nombrejoueurs; j++) {
        Serial.print("nom du joueur);
        Serial.print(j);
        Serial.println(" : ");
        Serial.read(nomjoueur);
        Serial.println(nomjoueur);
        this->mapartie.tabjoueur.push_back(joueur(j, nomjoueur, 0));
    }

    this->mapartie.actif[0] = 0;
    this->mapartie.actif[1] = 0;
    this->mapartie.actif[2] = 0;
    this->mapartie.actif[3] = 0;

    int i;
    for (i = 0; i < 4; i++) {
        if (this->mapartie.actif[i] == 0) {
            this->mapartie.nbreglesinactives++;
        }
    }

    this->tr.de1 = 0;
    this->tr.de2 = 0;
    this->tr.somme = 0;
    this->tr.attente = false;

    this->de.valde = -1;


};

void app::jeu() {

    while (nbrtours >=0) {
        de.majde();
        if (de.valde != -1) {
            tr.majtour(de.valde);
            if (tr.attente == false) {
                mapartie.majpartie(tr, nojoueur);

                if (nojoueur < nbjoueurs - 1) {
                    nojoueur++;
                }
                else {
                    nojoueur = 0;
                };

                nbrtours--;
            }
            de.valde = -1;
        }

    }
        Serial.println("fin de la partie");
};
