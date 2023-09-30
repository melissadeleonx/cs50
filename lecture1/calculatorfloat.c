#include <cs50.h>
#include <stdio.h>

// Explain the issue with long numbers
int main(void)
{
// Prompt user for x
    float x = get_float("x: ");

    // Promp user for y
    float y = get_float("y: ");

    // Divide x by y
    float z = x / y;
    printf("%.2f is the quotient of x by y\n", z);
}