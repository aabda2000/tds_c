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

static int bernoulli_distribution(float taux_alcoolemie)
{
    double r = ((double)rand() / (RAND_MAX));

    if (r >= taux_alcoolemie)
        return SOBRE; //sobre
    else
        return BOURRE; //bourré
}

int afficher_comparaison(int proposition, int a_trouver, float alcoolemie)
{
    int sobre = bernoulli_distribution(alcoolemie);
    //int cmp = 1;

    if (proposition == a_trouver)
    {
        if (sobre == SOBRE)
        {
            puts(SUCCES_MSG);
            return REPONSE_JUSTE;
        }
        else
        {
            puts(PG_MSG);
            return REPONSE_MENSONGERE;
        }
    }
    else

        if (proposition > a_trouver)
    {
        if (sobre == SOBRE)
        {
            puts(PP_MSG);
            return REPONSE_SINCERE;
        }
        else
        {
            puts(PG_MSG);
            return REPONSE_MENSONGERE;
        }
    }
    else

        if (sobre == SOBRE)
    {
        puts(PG_MSG);
        return REPONSE_SINCERE;
    }
    else
    {
        puts(PP_MSG);
        return REPONSE_MENSONGERE;
    }
}