#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter a starting population size : ");
    int x = get_int("Number of newborn llamas: ");
    int y = get_int("Number of deceased llamas: ");
    int end = n + x - y;
    printf("The number of llamas at the end of the year is %i\n", end);
    do
    {
        if (n < 9)
        {
            printf("Enter a starting population size (must be >= 9): ");
        }
    while (n < 9);
    return 0; }
}