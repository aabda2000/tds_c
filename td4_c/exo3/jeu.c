#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "jeu.h"

int entrer_nombre(void)
{
    int propos;
    printf(ENTRER_NB_MSG);
    scanf("%d", &propos);
    return propos;
}
int generer_hasard(void)
{
    srand(time(NULL));
    int range = 100;
    return 1 + rand() % range;
}

int afficher_comparaison(int proposition, int a_trouver)
{
    int cmp = 1;
    if (proposition > a_trouver)
    {
        puts(PP_MSG);
        cmp = 0;
    }
    else if (proposition < a_trouver)
    {
        puts(PG_MSG);
        cmp = 0;
    }
    else
    {
        puts(SUCCES_MSG);
    }
    return cmp;
}