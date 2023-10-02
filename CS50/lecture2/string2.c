#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Ready to conquer the world!!
int main(void)
{
    string s = get_string("Input: ");
    // Print the prompt using %c
    printf("Output: ");
    for (int i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");

}