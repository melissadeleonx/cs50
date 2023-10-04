#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

// Mention new function on the top
float calc_hours(int hours[], int weeks);

int main(void)
{
    // Given codes by cs50
    int weeks = get_int("Number of weeks taking CS50: ");
    int hours[weeks];

    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }

    char output;
    do
    { // Make the conditions 'T' for total hours and 'A' for average hours
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));

        if (output == 'T')
        {
            int Totalhours = 0;
            for (int i = 0; i < weeks; i++)
            {
                Totalhours += hours[i];
            }
            printf("The Total is %i hours\n", Totalhours);
        }
        else if (output == 'A')
        {
            float Average = calc_hours(hours, weeks);
            printf("The average is %.2f\n", Average);
        }
    }
    while (output != 'T' && output != 'A');
}

// TODO: complete the calc_hours function
float calc_hours(int hours[], int weeks)
{
    int Totalhours = 0;
    for (int i = 0; i < weeks; i++)
    {
        Totalhours += hours[i];
    }
    return (float) Totalhours / weeks;
}