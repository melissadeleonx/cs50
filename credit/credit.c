#include <cs50.h>
#include <stdio.h>

long get_number(void);
long american_express(long number);
long master_card(long number);
long visa(long number);

int main(void)
{
    long number = get_number("Number: ");


}


long get_number(void);
{
    long n;
    do
    {
        n = get_long("Number: ");

        if (n < 1)
        {
            printf("VISA\n");
        } else
    }
    while (n < 1);
    return n;
}