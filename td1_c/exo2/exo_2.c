#include <stdio.h>
#include <stdlib.h>

#define VRAI 1
#define FAUX VRAI - 1

/* gcc -Wall -pedantic -std=c99  exo_2.c -o exo2c */

/*Exécution : ./exo2c (puis Tapez sur la touche Entrée) */

int main(void)
{
    int a = 11;
    float b = 12.5;
    int comparer = a > b;
    printf("a>b :%d\n", comparer);
    printf("a<b :%d\n", a < b);
    printf("a=b :%d\n", a == b);
    return EXIT_SUCCESS;
}
