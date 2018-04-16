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
    enum TypeMouvement;


public:

    operationBancaire ();
    operationBancaire (double montant, TypeMouvement);

};


#endif //PROJET2_OPERATIONBANCAIRE_H
