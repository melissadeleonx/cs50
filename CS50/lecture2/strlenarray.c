#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    int i = 0;
    string name[3];
    while(i < 3)
    {
        name[i] = get_string("Name: ");
        i++;
    }


    int n = strlen(name[i]);
    for (i = 0; i < 3; i++)
    {
       printf("The length of %s is %i while the length of %s is %i", name, n );
    }
}