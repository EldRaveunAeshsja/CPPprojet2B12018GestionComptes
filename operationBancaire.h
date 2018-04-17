//
// Created by arnau on 06/04/2018.
//

#ifndef PROJET2_OPERATIONBANCAIRE_H
#define PROJET2_OPERATIONBANCAIRE_H

#include <iostream>


enum class Mouvement
{
    DEBIT,
    CREDIT
};

class operationBancaire
{
private:
    double _montant;
    Mouvement _Type;


public:

    operationBancaire ();
    operationBancaire (double montant, Mouvement Type);
    double getMontant();
};


#endif //PROJET2_OPERATIONBANCAIRE_H
