#include <stdio.h>
#include <stdlib.h>
#include "jeu.h"

#define DELTA_TAUX 0.2
#define DIVISE_TAUX 2

int main()
{
    int done = 0;
    int proposition;
    float taux_alcoolemie = 0.0;
    int a_trouver = generer_hasard();
    printf("le nombre à trouver est %d\n", a_trouver);
    while (1)
    {
        printf("\ntaux= %0.2f\n", taux_alcoolemie);
        proposition = entrer_nombre();
        done = afficher_comparaison(proposition, a_trouver, taux_alcoolemie);
        if (done == 1)
            break;
        else if (done == 0)
            taux_alcoolemie += DELTA_TAUX;
        else
            taux_alcoolemie /= DIVISE_TAUX;
    }

    return EXIT_SUCCESS;
}