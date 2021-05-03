#include <iostream>
#include <string>
#include <vector> 
#include<ctime>
#include "partie.h"
#include "regles.h"
using namespace std;

partie::partie() {




}

void partie::majpartie(tour tr, int joueur) {
    int noregle;
    unsigned int i;
    int noroles;
    cout << "Au tour de : " << tabjoueur[joueur].nom << "\n";
    switch (mesregles.changerregles(actif, tr, tabjoueur, joueur)) {
    case 1:
        srand((unsigned int)time(0));
        noregle = rand() % 4;
        if (nbreglesinactives > 0) {
            while (actif[noregle] == 1) {
                noregle = rand() % 4;
            };
            actif[noregle] = 1;
            cout << "une nouvelle r�gles apparait : ";
            switch (noregle) {
            case 0:
                cout << "le roi des pouces !\n";
                break;
            case 1:
                cout << "la reine des questions !\n";
                break;
            case 2:
                cout << "le freeze !\n";
                break;

            case 3:
                cout << "la noisette !\n";
                break;
            }
            nbreglesinactives--;
            break;
        }
        else {
            cout << "pas de r�gles � ajouter\n";
            break;
        };
        break;

    case 2:
        for (i = 0; i < tabjoueur.size(); i++)
            if (tabjoueur[i].role == 2) {
                tabjoueur[i].role = 0;
            }

        tabjoueur[joueur].role = 2;

        break;

    case 3:
        for (i = 0; i < tabjoueur.size(); i++)
            if (tabjoueur[i].role == 3) {
                tabjoueur[i].role = 0;
            }

        tabjoueur[joueur].role = 3;

        break;

    case 4:
        for (i = 0; i < tabjoueur.size(); i++)
            if (tabjoueur[i].role == 4) {
                tabjoueur[i].role = 0;
            }

        tabjoueur[joueur].role = 4;

        break;

    case 5:
        for (i = 0; i < tabjoueur.size(); i++)
            if (tabjoueur[i].role == 5) {
                tabjoueur[i].role = 0;
            }

        tabjoueur[joueur].role = 5;

        break;

    }
}
