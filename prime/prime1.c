#include <cs50.h>
#include <stdio.h>

// Goal: Make a prime-finding algorithm
// A boolean function that will help generate prime numbers

int main(void)
{
    // Prompt user to enter the minimum number with its limitations
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    // Prompt user to enter the maximum number with its limitations
    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (i % 2 != 2)
        {
            printf("%i\n", i);
        }
        else if (i % 2 != 0)
        {
            printf("%i\n", i);
        }
        }
    }
