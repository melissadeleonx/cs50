#include <cs50.h>
#include <stdio.h>

// Explain the issue with integer overflow, using a lot of bits but there are not much availability. Computer is only providing the closest approximation.
// Floating-point imprecision - inability of the computer to represent all possible real numbers - In C, this problem occurs while other scientific languages already found a solution
// Integers are allowed to have 32 bits(2 billions approximately for positive and another 2 billion for negative) by standard and floating-point imprecision occur when all of these bits are use and anything excessive is converted to 0000
// Another example of integer overflow is the year 2000 since computer then only count by 2, 95 96 97 98 99, and 00 is like coming back to 1900, the same will happen on January 19, 2038 with regards to the number of seconds that will be exhausted by computers
// Thankfully, it is no longer a problem as computer nowadays have 64 bits, doubling the integer space available

// First version of the code, we use float discussing the above topics
// Second version, we are trying with int data type of x and y with float z. The result of the division is 0.0000 which is called truncation in C(throwing away the decimals)
// Third version, this is extra exercise, I want to learn more!  int z = x / y;    int a = x % y;
// Fourth version, we are disussing a feature called type conversion, we can do it to one of the variables or both to get the floating value of the answer

int main(void)
{
// Prompt user for x
    int x = get_int("x: ");

    // Promp user for y
    int y = get_int("y: ");

    // Divide x by y
    float z = x / (float) y;


    printf("%.50f\n", z);
}