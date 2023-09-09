#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;

    do {
        n = get_int("Enter a starting population size: ");

        if (n <= 9) {
            printf("Please enter a starting population size greater than 9.\n");
        }
    } while (n <= 9);

    int x = get_int("Number of newborn llamas: ");
    int y;
     do {
        y = get_int("Number of deceased llamas: ");

        if (y >= n) {
            printf("Please enter a number less than the population size.\n");
        }
    } while (y >= n);
    
    int end = n + x - y;
    printf("The number of llamas at the end of the year is %i\n", end);

    return 0;
}