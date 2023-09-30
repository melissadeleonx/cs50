#include <cs50.h>
#include <stdio.h>

float discount(float regular);
// A modified version of discount.c with our created function called float discount

int main(void)
{
    float regular = get_float("Regular Price: ");
    float sale = discount;
    printf("The Sale Price is %.2f", sale);

}


float discount(int regular)
{
    float sale = regular * .85;
}