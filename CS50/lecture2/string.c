#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Simplify the code with strleclearn(do not forget the string.h library)
// One can omit int length and use %lu(undefined long) instead of %i
// Explore the https://manual.cs50.io/ STUDY!!!

int main(void)
{
    string name = get_string("Name: ");
    int length = strlen(name);
    printf("Length is %i\n", length);
}