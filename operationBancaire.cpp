//
// Created by arnau on 06/04/2018.
//

#include "operationBancaire.h"
#include "compte.h"
#include <iostream>
using namespace std;


operationBancaire::operationBancaire(){
    _montant = 0;
    _Type = Mouvement::CREDIT;
};

operationBancaire::operationBancaire(double montant, Mouvement Type) {
    _montant = montant;
    _Type = Type;
}

double operationBancaire::getMontant() {

    double a=_montant;
    if (_Type == Mouvement::DEBIT){
        a *= -1;
    }
    return a;
}



/*

int main(){

    if(TypeMouvement::DEBIT){

        // En gros ici on debite la solde de la classe compte par le montant;

        solde += montant;

    }else if(TypeMouvement::CREDIT){


        // En gros ici on credite la solde de la classe compte par le montant;

        solde -= montant;
    };




}
*/