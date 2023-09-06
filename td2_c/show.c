#include "show.h"
#include <stdio.h>
#include <unistd.h>
void Print(int *ptr)
{
    printf("(%d) addr stored in p: %p\n", (int)getpid(), ptr);
}