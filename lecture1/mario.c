#include <cs50.h>
#include <stdio.h>

// Goal to make mario icons, this kind of symbol manipulation is called ASCII art!
int main(void)
{
    int n;
    // Use a 'for' loop to make the ? repeat 4 times horizontally - First version of the code
    // do while LOOP will be discussed now for the second version of the code
    // do while is similar to the while loop but the condition is at the end, do the right thing but while indicates a new condition and what should be done for this new condition
    // For the second version of the code, we need to make a brick
    do
    {
        n = get_int("Size: "); // The size in this context is the
    } while (n < 1);

   for (int i = 0; i < n; i++)
   {
    printf("#");
   }
   printf("\n");

    // printf("\n") Put it in the end of the loop so it won't affect the other ASCII art
}