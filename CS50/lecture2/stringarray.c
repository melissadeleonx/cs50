#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int i = 0;
    string name[3];
    do
    {
        name[i] = get_string("Name: ");
        i++;
    } while ( name[i] < 3);

    printf("The name of my friends are %s, %s, %s", name[0], name[1], name[2]);

}