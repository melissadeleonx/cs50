#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // If you don't initialize or give an explicit value for a variable, garbage values will come out
    int scores[1024];
    for (int i = 0; i < 1024; i++)
    {
        printf("%i\n", scores[i]);
    }
}