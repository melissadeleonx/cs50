#include <cs50.h>
#include <stdio.h>

// Explain the issue with integer overflow, using a lot of bits but there are not much availability. Computer is only providing the closest approximation.
// Floating-point imprecision - inability of the computer to represent all possible real numbers - In C, this problem occurs while other scientific languages already found a solution

int main(void)
{
// Prompt user for x
    float x = get_float("x: ");

    // Promp user for y
    float y = get_float("y: ");

    // Divide x by y
    float z = x / y;
    printf("%.50f is the quotient of x by y\n", z);
}