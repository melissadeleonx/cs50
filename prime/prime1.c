#include <cs50.h>
#include <stdio.h>

// Goal: Make a prime-finding algorithm
// A boolean function that will help generate prime numbers

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (i % 2 == 1)
        {

        } else
        {
            printf("%i\n", i);
        }
    }

}