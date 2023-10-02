#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i = 0;
    string name[i];
    do
    {
        name[i] = get_string("Name: ");
        i++;
    } while ( i < 3);

     printf("The name of my friends are %s", name[3]);

}