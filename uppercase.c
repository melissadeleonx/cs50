#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before ");
    printf("After: ");
    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i] >= 'a' && s[i] < 'z')
        {
            printf("%c\n", s[i] - 32);
        }
        else
        {
            printf("%c\n", s[i]);
        }
    }
}