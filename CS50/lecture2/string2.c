#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Ready to conquer the world!!
// First version is trying out to print the string using char representation %c
// Second version is better designed with the same principle, only the strlen is assigned with the int variable and added inside the for loop.
int main(void)
{
    string s = get_string("Input: ");
    // Print the prompt using %c
    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++) // we can declare multiple variables in the for loop
    {
        printf("%c", s[i]);
    }
    printf("\n");

}