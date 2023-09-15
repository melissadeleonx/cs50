#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, string argv[])
{
    bool containsDigit = false;

    if(argc != 2)
    {
        printf("Missing info!!\n");
        return 1;
    }

       for (int i = 0; argv[1][i] != '\0'; i++) {
        if (isdigit(argv[1][i])) {
            containsDigit = true;
            break;
        }
        }

        if(containsDigit)
    {
        printf("No numbers please\n");
    }
    else
    {
        printf("%s\n", argv[1]);
    }
    return 0;
}


