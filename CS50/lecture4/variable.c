#include <stdio.h>

int main(void)
{
    // Interchangeably, we can use char *s as string is really just the pointer for char data types
    char *s = "HI!";
    printf("%s\n", s);
    printf("%p\n", &s[0]);
}