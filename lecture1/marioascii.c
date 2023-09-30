#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Do not forget that declaring int n outside the do while loop means its scope includes the dowhile loop and for conditionals, do not forget to assign its value =
    int n;
    do
    {
        n = get_int("Size: "); // Size in this context is the height and widht of the left pyramid
    } while (n < 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}