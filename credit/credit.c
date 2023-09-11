#include <cs50.h>
#include <stdio.h>

long get_number(const char *prompt);
int american_express(int number);
int master_card(int number);
int visa(int number);

int main(void)
{
    long number = get_number("Number: ")

}


long get_number(const char *prompt);
{
    long n;
    do
    {
        n = get_long("Number: ");

        if (n < 1)
        {
            printf("Please enter a positive number\n");
        }
    }
    while (n < 1);
    return n;
}