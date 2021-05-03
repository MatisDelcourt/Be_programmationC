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
                cout << joueur[nojoueur - 1].nom << " boit une gorgée \n";
            }
            else {
                cout << joueur[joueur.size() - 1].nom << " boit une gorgée \n";
            }

      }

    if (tr.somme == 8) {
            if (nojoueur != joueur.size()-1) {
                cout << joueur[nojoueur + 1].nom << " boit une gorgée \n";
            }
            else {
                cout << joueur[0].nom << " boit une gorgée \n";
            }
        }
    
    if (tr.somme == 9) {
        if (tableau[0] == 1) {
            cout << joueur[nojoueur].nom << " devient le roi des pouces\n";

            etat=2;
        }

    }

    if (tr.somme == 10) {
        if (tableau[1] == 1) {
            cout << joueur[nojoueur].nom << " devient la reine des questions\n";

            etat=3;
        }

    }

    if (tr.somme == 4) {
        if (tableau[2] == 1) {
            cout << joueur[nojoueur].nom << " devient le freeze\n";

            etat=4;
        }

    }

    if (tr.somme == 3) {
        if (tableau[3] == 1) {
            cout << joueur[nojoueur].nom << " devient la noisette\n";

            etat=5;
        }
    }

    if(tr.de1==3 or tr.de2==1){
        if (tableau[3] == 1) {
            int i;
            for (i = 0; i < joueur.size(); i++) {
                if (joueur[i].role == 5) {
                    cout << joueur[i].nom << " boit trois gorgées\n";
                }
            }
        }
    }

    return etat;
}