#include <cs50.h>
#include <stdio.h>

int main(void)
{
        // Prompt user for height
    int height = get_int("Height: ");
    // conditionals: if height < 1 or > 8 (or not a positive integer at all), prompt again and again (loop) until valid answer is received
    do {
         get_int("Height: ");
        } while (height > 1);
// Add Iterate from 1 through height: On iteration i, print i hashes and then a newline

}