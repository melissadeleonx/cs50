#include <stdio.h>
#include <cs50.h>
#include <math.h>

// Step 1: Make a pseudocode
// Goal: Determine how long it takes for a population to reach a particular size. We need to print the year!
int main(void)
{
    // Prompt the user for a starting population size
    int start;
    // Step 2: Make a condition with this rule: If the user enters a number less than 9 (the minimum allowed population size), the user should be re-prompted to enter a starting population size until they enter a number that is greater than or equal to 9. (If we start with fewer than 9 llamas, the population of llamas will quickly become stagnant!)
    do
    {
        start = get_int("Start Size: ");
        // Put another conditionals inside the loop so there is a prompt message everytime the user puts less than 9
        if (start < 9 )
        {
        printf("Please enter a number equals or less than 9\n");
        }
    } while (start < 9);

    // Prompt the user for an ending population size
    int end;
    do {
        end = get_int("End Size: ");

        // Step 3: Make a condition with this rule: If the user enters a number less than the starting population size, the user should be re-prompted to enter an ending population size until they enter a number that is greater than or equal to the starting population size. (After all, we want the population of llamas to grow!)
        if (end < start)
        {
        printf("Please enter a number greater than the starting population size\n");
        }
    } while (end < start);

    // Calculate the user input: Your program should then calculate the (integer) number of years required for the population to reach at least the size of the end value.
    // Remember the formula provided and think of another to satisfy the result. First year = start + 1/3 new llamas - 1/4 deceased llamas
    // Use the logarithmic function from the math.h library(similar to Dr. Malan's directory example)

    int birth = 1/3;
    int death = 1/4;
    int year = start + birth - death;

    







    // Print the number of years required for the llama population to reach that end size, as by printing to the terminal Years: n, where n is the number of years.