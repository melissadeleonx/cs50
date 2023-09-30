#include <cs50.h>
#include <stdio.h>

// Goal is to identify if number is odd or even, we can use the operator mod % to get the remainder, 0 for even, 1 for odd
int main(void)
{

    int n = get_int("n: ");
    // You can make a pseudocode, retain it or transfer them somewhere
    // if n is even --> how to get the remainder (any number divide by 2 will have 0 remainder, so n % 2 == 0)
    if (n % 2 == 0) // == is the equivalent operator; java even have === :)
        {
            printf("even\n");
        }
    // else n is odd, you do not need to put anything on the last conditionals if there are only two options, if 3, last is always empty
    else
        {
            printf("odd\n");
        }
}