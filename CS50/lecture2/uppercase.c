#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// Goal to turn before lowercase to uppercase letters(char)
// I used the function tolower from ctype.h library. Let's hear what Dr. Malan propose?


int main(void)
{
    string s = get_string("Before: ");

    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
            printf("%c", tolower(s[i]));
    }
    printf("\n");
}