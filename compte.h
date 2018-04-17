//
// Created by arnau on 06/04/2018.
//

#ifndef PROJET2_COMPTE_H
#define PROJET2_COMPTE_H

#include <iostream>
#include <list>
#include "operationBancaire.h"


class compte {


private:

    std::string _nomProprietaire;
    double _solde;
    double _decouvertAutorise;
    std::list<operationBancaire> _historique;


public:

    compte();
    compte(std::string nomProprietaire, double solde, double decouvertAutorise);
    double GetSolde();
    void Crediter(double somme);
    void Crediter(double somme, std::string compteCredite);
    void Debiter(double somme);
    void Debiter(double somme, std::string compteDebite);
    void InfoCompte(std::string nomProprietaire, double solde, double decouvertAutorise,std::list<operationBancaire> historique );



};


#endif //PROJET2_COMPTE_H
