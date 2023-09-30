#include <stdio.h>

// Use simple library as we only need the functions for this one
// Now we are tacking LOOPS

int main(void)
{
    // while loop also take bool function(condition(<=,>=,==, operators)), one case use 1 for true and 0 for false or just as it is to be explicit
    int i = 2; // counter is what used in Scratch
    while (i <= 10)
    {
        printf("meow\n");
        i++; // to increment from 0 and up, syntatic sugar if you want to implement how many times you want to repeat depending on the boolean function inside while
    }
}