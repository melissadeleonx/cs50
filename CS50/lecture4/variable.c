#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Interchangeably, we can use char *s as string is the pointer for char data types
    string s = "HI!";
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}