#include <stdio.h>
#include <stdlib.h>
#include "jeu.h"

int main()
{
    int done = 0;
    int proposition;

    int a_trouver = generer_hasard();
    printf("le nombre à trouver est %d\n", a_trouver);
    while (!done)
    {
        proposition = entrer_nombre();
        done = afficher_comparaison(proposition, a_trouver) == 1 ? 1 : 0;
    }
    return EXIT_SUCCESS;
}