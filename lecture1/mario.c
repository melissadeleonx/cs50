#include <cs50.h>
#include <stdio.h>

// Goal to make mario icons, this kind of symbol manipulation is called ASCII art!
int main(void)
{
    // Use a 'for' loop to make the ? repeat 4 times horizontally - First version of the code
    // do while LOOP will be discussed now for the second version of the code
    // do while is similar to the while loop but the condition is at the end, do the right thing but while 

    for (int i = 0; i < 4; i++)
    {
        printf("?");
    }
    printf("\n"); // Put it in the end of the loop so it won't affect the other '?'
}