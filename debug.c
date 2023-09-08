#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    float result = x / y;

    if (x || y != 0) {
        printf("The result of %i and %i is: %.2f\n", x, y, result);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}