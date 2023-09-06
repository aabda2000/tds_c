#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float stocker_val(int t[], int k, int val) {

    t[k-1]=val;
}


float moyenner_propositions(int t[], int nb_essais) {
  float moy=0;
for (int i=0; i <nb_essais;i++) {
 moy=moy+t[i];
}
return moy/nb_essais;
}
int entrer_nombre()
{
    int propos;
    printf("saisir votre nombre: ");
    scanf("%d", &propos);
    return propos;
}
int generer_hasard()
{
     srand( time( NULL ) );
    int range = 100;
    return 1 + rand() % range;
}

static int bernoulli_dist(float p)
{
    double r = ((double)rand() / (RAND_MAX));
    unsigned int br = 0;
    if (r >= p)
        return 1; //succcès
    else
        return 0; //échec
}

int afficher_comparaison(int proposition, int a_trouver, float alcoolemie)
{
    float br = bernoulli_dist(alcoolemie);

    if (proposition == a_trouver)
    {
        if (br == 1)
        {
            printf("gagné\n");
            return 1;
        }
        else
        {
            printf("plus\n");
            return -1;
        }
    }

    if (proposition > a_trouver)
    {
        if (br == 1)
        {
            printf("moins\n");
            return 0;
        }
        else
        {
            printf("plus\n");
            return -1;
        }
    }

    if (proposition < a_trouver)
    {
        if (br == 1)
        {
            printf("plus\n");
            return 0;
        }
        else
        {
            printf("moins\n");
            return -1;
        }
    }
}

int main()
{
    int done = 0;
    int propos;
    float taux = 0.0;
    int t[256];
    int k=1;
    int a_trouver=generer_hasard();
    printf("à trouver %d\n",a_trouver);
    while (!done)
    {
        propos=entrer_nombre();
        stocker_val(t,k,propos);
        k++;
        int r = afficher_comparaison(propos, a_trouver, taux);
        if (r == 1)
            done = 1;
        else if (r == 0)
            taux = (taux + 0.1) <= 1 ? taux + 0.1 : 1.0;
        else
            taux = taux / 2;
        printf("taux=%f\n", taux);
    }

    printf("moyen %f\n", moyenner_propositions(t,k-1));
}