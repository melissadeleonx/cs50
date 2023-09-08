#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Enter a starting population size (must be >= 9): ");
        getchar();
    }
    while (n < 9);

    int x = get_int("Number of newborn llamas: ");
    int y = get_int("Number of deceased llamas: ");

    int end = n + x - y;

    printf("The number of llamas at the end of the year is %i\n", end);

    return 0;
}
