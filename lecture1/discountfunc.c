#include <cs50.h>
#include <stdio.h>

float discount(float regular, int percentage);
// A modified version of discount.c with our created function called float discount
// Sometimes, the SIMPLER CODES are the BETTER CODES
// Watch out for the data types inside the () of the new functions, the return of the input, for this case, the prompted regular from the user
// Do not complicate life!

int main(void)
{
    float regular = get_float("Regular Price: ");
    int percent_off = get_int("Percent Off: ");
    float sale = discount(regular, percent off);
    printf("The Sale Price is $%.2f\n", sale);

}








// The new functions is not printing anything but handling a value to a variable to make the code cleaner
float discount(float regular, int percentage) // wondering where is the in percentage declaration??
{
    return regular * (100 - percentage) / 100;
}