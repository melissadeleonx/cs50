#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter the starting population: ");
    int x = get_int("Number of newbor llamas: ");
    int y = get_int("Number of deceased llamas: ");

    // TODO: Calculate number of years until we reach threshold

    int end = n + x - y;

    // TODO: Print number of years

    printf("The number of llamas at the end of the year is %i\n", end);

    return 0;

    // TODO: Prompt for end size

}
