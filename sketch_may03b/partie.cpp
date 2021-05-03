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
    Serial.print("Au tour de : ");
    Serial.println(tabjoueur[joueur].nom);
    switch (mesregles.changerregles(actif, tr, tabjoueur, joueur)) {
    case 1:
        srand((unsigned int)time(0));
        noregle = rand() % 4;
        if (nbreglesinactives > 0) {
            while (actif[noregle] == 1) {
                noregle = rand() % 4;
            };
            actif[noregle] = 1;
            Serial.print("une nouvelle r�gles apparait : ");
            switch (noregle) {
            case 0:
                Serial.println("le roi des pouces !");;
                break;
            case 1:
                Serial.println("la reine des questions !");
                break;
            case 2:
                Serial.println("le freeze !";;
                break;

            case 3:
                Serial.println("la noisette !");
                break;
            }
            nbreglesinactives--;
            break;
        }
        else {
           Serial.println("pas de r�gles � ajouter");
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
