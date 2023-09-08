#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = scanf("%d", x); printf("x: ");
    int y = scanf("%d", y); printf("y: ");
    float result = x / y;
    if (x || y != 0) {
        printf("The result of %d and %d is: %.2f\n", x, y, result);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}