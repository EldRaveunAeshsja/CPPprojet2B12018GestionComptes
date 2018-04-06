//
// Created by arnau on 06/04/2018.
//

#ifndef PROJET2_OPERATIONBANCAIRE_H
#define PROJET2_OPERATIONBANCAIRE_H

#include <iostream>


enum TypeMouvement
{
    DEBIT,
    CREDIT
};

class operationBancaire
{
private:
    double montant;
    TypeMouvement mTypeMouvement;


public:

    operationBancaire ();
    TypeMouvement (TypeMouvement mTypeMouvement, double montant);
    operationBancaire(TypeMouvement m):mTypeMouvement{m} {};

};


#endif //PROJET2_OPERATIONBANCAIRE_H
