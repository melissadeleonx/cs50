#include <stdio.h>

// Trying out alternative syntax code to make more memory allocation to the string
#define MAX 100

int main(void)
{
    // for int and other datatype, we use & on scanf but with string it is different since string is already an address
    char s[100];
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);

}