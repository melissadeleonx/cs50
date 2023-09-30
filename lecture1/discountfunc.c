#include <cs50.h>
#include <stdio.h>

float discount(int regular);
// A modified version of discount.c with our created function called float discount

int main(void)
{
    float regular = get_float("Regular Price: ");
    float sale = float discount;
    printf("The Sale Price is %.2f", discount);

}


float discount(int regular)
{
    float sale = regular * .85;
    return sale;
}