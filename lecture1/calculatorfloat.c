#include <cs50.h>
#include <stdio.h>

// Explain the issue with integer overflow, using a lot of bits but there are not much availability. Computer is only providing the closest approximation.
// Floating-point imprecision - inability of the computer to represent all possible real numbers - In C, this problem occurs while other scientific languages already found a solution
// First version of the code, we use float discussing the above topics
// Second version, we are trying with int data type
int main(void)
{
// Prompt user for x
    int x = get_int("x: ");

    // Promp user for y
    int y = get_int("y: ");

    // Divide x by y
    float z = x / y;
    printf("%.f is the quotient of x by y\n", z);
}