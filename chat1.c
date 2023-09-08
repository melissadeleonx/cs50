#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num1 = 10;
    int num2 = 0;
    string result;

    result = num1 / num2;

    printf("Division of 0 is not allowed\n", result);

    return 0;
}