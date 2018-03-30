//
// Created by arnau on 30/03/2018.
//

#ifndef PROJET2_GESTIONBANC_H
#define PROJET2_GESTIONBANC_H

enum TypeMouvement
{
    DEBIT,
    CREDIT
};

    class gestionbanc
    {
    private:
        double montant;
        TypeMouvement mTypeMouvement;

    public:

        gestionbanc(TypeMouvement m):mTypeMouvement{m} {};

    };


#endif //PROJET2_GESTIONBANC_H
