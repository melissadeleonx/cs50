#include <cs50.h>
#include <stdio.h>

float discount(float regular, int percent_off);
// A modified version of discount.c with our created function called float discount
// Sometimes, the SIMPLER CODES are the BETTER CODES
// Watch out for the data types inside the () of the new functions, the return of the input, for this case, the prompted regular from the user
// Do not complicate life!

int main(void)
{
    float regular = get_float("Regular Price: ");
    int percentage = get_int("Percent Off: ");
    float sale = discount(float regular, int percent_off);
    printf("The Sale Price is $%.2f\n", sale);

}








// The new functions is not printing anything but handling a value to a variable to make the code cleaner
float discount(float regular, int percent_off)
{

    regular - (percent_off / 100);

   // I am not sure why Prof. David did not see the bug or why the system made it work but he declared 2 different int, one int percentage and one is int percent_off: I have no idea!
   // Regarding my question, turned out there is a thing called parameters within the functions, which can be changed on the main
}