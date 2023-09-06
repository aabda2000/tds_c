#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* Compilation + Assemblage +EdL: gcc -Wall -pedantic -std=c99  exo_6.c -o exo6 */

/*Exécution : ./exo6 (puis Tapez sur la touche Entrée) */

int main(void)
{
    unsigned long mot;
    unsigned short nb_bits_a_1 = 0;
    printf("saisir un entier(mot) positif ou nul: ");
    scanf("%lu", &mot);

    printf("%lu décalée de 4 bits vers la gauche donne: %lu\n", mot, mot << 4);

    /*Bonus*/
    printf("%lu contient ", mot);
    while (true)
    {
        if (mot == 0)
            break;

        if ((mot & 0x1) == 1)
            nb_bits_a_1++;

        mot = mot >> 1;
    }
    printf("%d bit(s) à 1\n", nb_bits_a_1);
    return EXIT_SUCCESS;
}
