#include <cs50.h>
#include <stdio.h>

// Goal: Make a prime-finding algorithm
// A boolean function that will help generate prime numbers(works like isalpha, isdigit etc.)
bool prime(int number);
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
        if (prime(i))
        {
            printf("%i", i);
        }
        return 0;
    }
}







// How to identify a prime number?
bool prime(int number)
{
    if (number <= 1)
    {
        return false;
    } else if (number == 2)
    {
        return true;
    } else if (number % 2 == 0)
    {
        return false;
    }
    return false;
}
