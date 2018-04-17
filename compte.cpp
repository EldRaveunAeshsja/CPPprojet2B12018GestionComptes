//
// Created by arnau on 06/04/2018.
//

#include "compte.h"
#include "operationBancaire.h"
#include <iostream>
using namespace std;

compte::compte() {
    _nomProprietaire = "Sans noms";
    _solde = 0;
    _decouvertAutorise = 0;
}

compte::compte(std::string nomProprietaire, double solde, double decouvertAutorise) {
    _nomProprietaire= nomProprietaire;
    _solde = solde;
    _decouvertAutorise = decouvertAutorise;
    _historique

}

double compte::GetSolde() {

    double solde(0);
    for (operationBancaire element: _historique )
    {
        solde += element.getMontant();
        if(){}
    }


        //operationBancaire::getMontant();


}



