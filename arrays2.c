#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int size[5];
    do
    {
        size = get_int("Size: ");
    }
    while (size < 0);

    for(int i = 1; i < 5; i++)
    {
        printf("%i\n", int size[i]);
    }
}