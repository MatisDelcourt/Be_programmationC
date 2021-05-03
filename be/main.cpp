#include <iostream>
#include <string>
#include <vector>
#include "joueur.h"
#include "regles.h"
#include "roles.h"
#include "partie.h"
#include "tour.h"
#include "app.h"

using namespace std;

int main() {

    int fin;
    /*unsigned int i;

    for (i = 0; i < mapartie.tabjoueur.size(); i++) {
        cout << mapartie.tabjoueur[i].no << mapartie.tabjoueur[i].nom << mapartie.tabjoueur[i].role << "\n";
    };

    tour tourtest;
    cout <<"\n"<< tourtest.de1 << "\n";
    cout << tourtest.de2 << "\n";
    cout << tourtest.somme << "\n"<<"\n";


    tourtest.majtour(6);
    tourtest.majtour(6);

    cout << "\n" << tourtest.de1 << "\n";
    cout << tourtest.de2 << "\n";
    cout << tourtest.somme << "\n" << "\n";



    mapartie.majpartie(tourtest, 2);

    for (i = 0; i < mapartie.tabjoueur.size(); i++) {
        cout << mapartie.tabjoueur[i].no << mapartie.tabjoueur[i].nom << mapartie.tabjoueur[i].role << "\n";
    };

    tourtest.majtour(6);
    tourtest.majtour(5);

    mapartie.majpartie(tourtest, 1);

    for (i = 0; i < mapartie.tabjoueur.size(); i++) {
        cout << mapartie.tabjoueur[i].no << mapartie.tabjoueur[i].nom << mapartie.tabjoueur[i].role << "\n";
    };*/


    app nvjeu;

    nvjeu.jeu();

    cin >> fin;

}