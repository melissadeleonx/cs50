#include <cs50.h>
#include <stdio.h>

// Goal to make mario icons, this kind of symbol manipulation is called ASCII art!
int main(void)
{
    int n;
    // Use a 'for' conditionals to make the ? repeat 4 times horizontally - First version of the code
    // do while LOOP will be discussed now for the second version of the code
    // do while is similar to the while loop but the condition is at the end, do the right thing and while will prompt user again and again until do is met
    // For the second version of the code, we need to make a brick of #
    // You can also use the while LOOP but it is a little longer, and you will use the function break at the end for the condition that does not met the requirement
    do
    {
        n = get_int("Size: "); // The size in this context is the
    } while (n < 1);

    // I was able to solve the problem but I am still unsure with more complicated ones
    // Do not forget that i and j are counters like in scratch, the variable that will assign the number of times

    // For each row
    for (int i = 0; i < n; i++)
    {
        // For each column
        for (int j = 0; j < n; j++)
       {
        // Print a brick
        printf("#");
   }

   // Move to next row
   printf("\n");
   }

    // printf("\n") Put it in the end of the loop so it won't affect the other ASCII art
}