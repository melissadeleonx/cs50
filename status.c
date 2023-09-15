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
    }
    else if(!containsDigit)
    {
        printf("No numbers please\n");
    }
    else { printf("%s\n", argv[1]);
    }
}



// Check if the input contains any digit character
    bool containsDigit = false;
    for (int i = 0; argv[] != 0; i++) {
        if (isdigit(argv[])) {
            containsDigit = true;
            break;
        }
        }