#include <stdio.h>
#include <cs50.h>

// Goal is to make an array of string, similar to the array int on score.c
// First version is a copied code online for study reference, check on the terminal and try to remember the rules

int main(void)
{
    // Define an array of strings
    string myStrings[3];

    // Get strings from the user using a while loop
    int i = 0;
    while (i < 3)
    {
        myStrings[i] = get_string("Enter a string: ");
        i++;
    }

    // Print the entered strings
    printf("You entered:\n");
    i = 0;
    while (i < 3)
    {
        printf("%s\n", myStrings[i]);
        i++;
    }

    return 0;
}
