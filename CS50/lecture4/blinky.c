#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x;
    int *y;

    y = malloc(sizeof(int));

    *y = 42;
    x = y;

    *x = 13;

    printf("%i\n", *x);

}