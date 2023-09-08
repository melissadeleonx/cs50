#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float x = get_float("x: ");
    float y = get_float("y: ");

    if (x && y != 0) {
        float result = x / y;
        printf("The result of %.2f and %.2f is: %.2f\n", x, y, result);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}