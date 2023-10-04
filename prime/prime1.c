#include <cs50.h>
#include <stdio.h>

// Goal: Make a prime-finding algorithm
// A boolean function that will help generate prime numbers
bool prime(int number);

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
}

bool prime(int number)
{
    if (n % 2 == 0)
    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }

    return false;
}
