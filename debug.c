#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x;
    int y;
    float result;

    float result = x / y;

    printf("x: ");
    scanf("%i", x);

    printf("y: ");
    scanf("%i", y);

    if (x || y != 0) {
        printf("The result of %d and %d is: %.2f\n", x, y, result);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}