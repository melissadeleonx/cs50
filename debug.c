#include <stdio.h>

int main(void) {
    int num1 = 10;
    int num2 = 0;
    int result;

    

    if (num2 != 0) {
        result = num1 / num2;
        printf("The result of %d and %d is: %.d\n", num1, num2, result);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}