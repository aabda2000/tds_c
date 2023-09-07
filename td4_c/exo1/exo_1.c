#include <stdio.h>
#include <stdlib.h>
#include "jeu.h"
#define MSG_SUCCESS ">gagné<"

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
    if (done == 1)
        puts(MSG_SUCCESS);
    return EXIT_SUCCESS;
}