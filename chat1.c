#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter a starting population size : ");
    do {
        if (n < 9)
        {
            get_int("Enter a starting population size (must be >= 9): ");
            printf("Enter a starting population size (must be >= 9): \n");
        }

    int x = get_int("Number of newborn llamas: ");

    int y = get_int("Number of deceased llamas: ");

    if (y > n)
        {
            printf("Number of deceased llamas: (must be less than the starting population) ");
        }

    int end = n + x - y;

    printf("The number of llamas at the end of the year is %i\n", end);

    return 0;
}