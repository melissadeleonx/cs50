#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// Goal to turn before lowercase to uppercase letters(char)
// I used the function tolower from ctype.h library. Let's hear what Dr. Malan propose?
// Okay he wants to uppercase so I will use toupper this time. My code works!
// Hmmn, his version is more complicated but feels like the result he wants is just to uppercase.
// The code needs to only accept lowercase characters


int main(void)
{
    string s = get_string("Before: ");

    printf("After: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    { if(s[i] >= 'a' && s[i] <= 'z')
            {
                printf("%c", toupper(s[i]));
            }
    }
    printf("\n");
}