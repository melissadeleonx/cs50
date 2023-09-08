#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x;
    int y;
    float result;

    // print and scan x
    printf("x: ");
    scanf("%i", x);

    // print and scan y
    printf("y: ");
    scanf("%i", y);




    if (x || y != 0) {
        result = num1 / num2;
        printf("The result of %d and %d is: %.d\n", num1, num2, result);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}