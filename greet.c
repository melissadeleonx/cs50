#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if(argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else if(argc == 3)
    {
        printf("hello, %s %s\n", argv[1], argv[2]);
    }
        else
    {
        printf("Hello user!\n");
    }
}