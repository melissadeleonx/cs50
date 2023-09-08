#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num1 = get_int("insert num1: ");
    int num2 = get_int("insert num2: ");
    int difference;

    difference = num1 - num2;
    printf("The difference of %i and %i is: %d\n", num1, num2, difference);

    return 0;
}