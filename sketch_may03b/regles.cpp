#include <iostream>
#include <string>
#include<vector>
#include "regles.h"
#include "joueur.h"
using namespace std;

regles::regles() {
}

int regles::changerregles(int tableau[4], tour tr, vector<joueur> joueur, int nojoueur) {
    int etat = 0;
    if (tr.de1 == 6) {
        if (tr.de2 == 6){
            etat=1;

        }
    }

    if (tr.somme == 7) {
        cout << "Bizkit !!!";
    }

     if (tr.somme == 6) {
            if (nojoueur != 0) {
                Serial.print(joueur[nojoueur - 1].nom); 
                Serial.println(" boit une gorg�e");
            }
            else {
                Serial.print(joueur[joueur.size() - 1].nom);
                Serial.println(" boit une gorg�e");
            }

      }

    if (tr.somme == 8) {
            if (nojoueur != joueur.size()-1) {
                Serial.print(joueur[nojoueur + 1].nom);
                Serial.println(" boit une gorg�e ";;
            }
            else {
                Serial.print(joueur[0].nom); 
                Serial.println(" boit une gorg�e ");
            }
        }
    
    if (tr.somme == 9) {
        if (tableau[0] == 1) {
            Serial.print(joueur[nojoueur].nom);
            Serial.println(" devient le roi des pouces");

            etat=2;
        }

    }

    if (tr.somme == 10) {
        if (tableau[1] == 1) {
            Serial.print(joueur[nojoueur].nom);
            Serial.println(" devient la reine des questions");

            etat=3;
        }

    }

    if (tr.somme == 4) {
        if (tableau[2] == 1) {
            Serial.print(joueur[nojoueur].nom);
           Serial.println(" devient le freeze");

            etat=4;
        }

    }

    if (tr.somme == 3) {
        if (tableau[3] == 1) {
            Serial.print(joueur[nojoueur].nom);
            Serial.println(" devient la noisette");

            etat=5;
        }
    }

    if(tr.de1==3 or tr.de2==1){
        if (tableau[3] == 1) {
            int i;
            for (i = 0; i < joueur.size(); i++) {
                if (joueur[i].role == 5) {
                    Serial.print(joueur[i].nom);
                    Serial.println(" boit trois gorg�es");;
                }
            }
        }
    }

    return etat;
}
