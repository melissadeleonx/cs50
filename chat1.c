#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num1 = get_int("num1: ");
    int num2 = get_int("num2: ");
    int result;

    if (num1 != 0 && num2 != 0)
    {
        result = num1 / num2;
        printf("The result is: %i\n", result);
    } else {
        printf("Division by zero is not allowed\n");
        }
    return 0;
}