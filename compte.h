//
// Created by arnau on 06/04/2018.
//

#ifndef PROJET2_COMPTE_H
#define PROJET2_COMPTE_H

#include <iostream>


class compte {


private:

    std::string nomProprietaire;
    double solde;
    double decouvertAutorise;



public:

    compte();
    compte(std::string nomProprietaire, double solde, double decouvertAutorise);




};


#endif //PROJET2_COMPTE_H
