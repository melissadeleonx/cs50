// Implementation of Linear Search into code with string
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // STRING ARRAYS
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    string s = get_string("String: ");
    // Use the string.h library to use the function strcmp, to compare strings with each other
    for (int i = 0; i < 7; i++)
    {
         for example (strcmp(samples[i], n) == 0)
        if (numbers[i] == n)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}