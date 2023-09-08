#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("start: ");
    int x = get_int("first: ");
    int y = get_int("second: ");

    // TODO: Calculate number of years until we reach threshold

    int end = n + x - y;

    // TODO: Print number of years

    printf("The number of llamas at the end of the year is %i\n", end);

    return 0;
    
    // TODO: Prompt for end size

}
