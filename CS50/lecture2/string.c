#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Simplify the code with strlen(do not forget the string.h library)
int main(void)
{
    string name = get_string("Name: ");
    int length = strlen(name);
    printf("Length is %i\n", length);
}