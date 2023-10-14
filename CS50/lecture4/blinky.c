#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x;
    int *y;

    x = malloc(sizeof(int));
    y = NULL;

    *x = 42;
    *y = 13;

    y = x;

    *y = 13;

    printf("");

    free(y);
}