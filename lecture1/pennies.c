#include <cs50.h>
#include <math.h>
#include <stdio.h>

// First version has 4.20 dollar amount to pennies but only resulted to 419 pennines, programmers need to be attended to this kind of problem
// We added the math.h library for a function called round and it works correctly
// These undefined behavior can crash an airplance so be careful
int main(void)
{
    float amount =  get_float("Dollar amount: ");
    int pennies = round(amount * 100);
    printf("Pennies: %i\n", pennies);

    // Thank Professor David for 2 billion dollars of knowledge!!
}