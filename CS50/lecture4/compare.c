#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get two strings
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // Compare strings' addresses
    if (strcmp(s, t) == 0)
    {
        printf("Same\n");
        printf("%p\n", s);
        printf("%p\n", t);
    }
    else
    {
        printf("Different\n");
    }
}