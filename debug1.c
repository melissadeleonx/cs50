#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float num1 = get_float("insert num1: ");
    float num2 = get_float("insert num2: ");
    float difference;

    difference = num1 - num2;
    printf("The difference of %.2f and %.2f is: %.2f\n", num1, num2, difference);

    return 0;
}