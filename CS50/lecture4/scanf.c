#include <stdio.h>

int main(void)
{
    // for int and other datatype, we use & on scanf but with string it is different since string is already an address
    char *s;
    printf("s: ");
    scanf("%s", *s);
    printf("x: %s\n", s);
}