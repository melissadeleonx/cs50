#include <stdio.h>

// To try out alternative syntax code for more than 1 string(words with space), we can use various libraries

int main(void)
{
    // for int and other datatype, we use & on scanf but with string it is different since string is already an address
    char s[4];
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);

}