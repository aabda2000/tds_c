// mem.c
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "common.h"
#include "show.h"
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "usage: mem <value>\n");
        exit(1);
    }
    int *p;
    p = malloc(sizeof(int));
    assert(p != NULL);
    Print(p);
    *p = atoi(argv[1]); // assign value to object pointed to by p
    while (1)
    {
        Spin(1);
        *p = *p + 1;
        Print(p);
    }
    return 0;
}
