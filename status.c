#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
bool containsDigit = false;

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Missing info!!\n");
    }
    else if (!containsDigit) {
        printf("Missing info!!\n")
    }
    else { printf("%s\n", argv[1]);}
}





// Check if the input contains any digit character
    bool containsDigit = false;
    for (int i = 0; argv[] != 0; i++) {
        if (isdigit(argv[])) {
            containsDigit = true;
            break;
        }
        }