#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before ");
    printf("After: ");
    for (i = 0; i < strlen(s); i++)
    {
        if(s[i] >= 'a' && s[i] < 'z')
        {
            printf("%c", s[i])
        }
    }

}