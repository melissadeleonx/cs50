#include <stdio.h>
#include <cs50.h>

get_negative_int(void); // void for no input

int main(void)
{
    int i = get_negative_int();
    printf("%i\n", i);

}



get_negative_int(void)
{
    for (int i = 0; i < 3; i++)
    {
        printf("%i\n");
    }
}