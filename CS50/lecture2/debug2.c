#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height = get_int("height: ");
    int width = get_int("weight: ");
    string result;
    printf("Your height is %i and your weight is %i\n", height, width);

    return 0;
}