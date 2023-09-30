#include <cs50.h>
#include <stdio.h>

float discount(float regular);
// A modified version of discount.c with our created function called float discount
// Sometimes, the simpler codes are the better codes

int main(void)
{
    float regular = get_float("Regular Price: ");
    printf("The Sale Price is %.2f", discount);

}


float discount(int regular)
{
    return * .85;
}