#include <stdio.h>
#include <cs50.h>

// Goal is to get negative integer
// I think I was able to solve the code? 
int get_negative_int(void); // void for no input

int main(void)
{
    int i = get_negative_int();
    printf("You entered %i\n", i);

}



int get_negative_int(void)
{
    int n;
    do
    {
        n = get_int("Negative Integer: ");

    } while (n > 0);
    return n;
}