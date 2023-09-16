#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

float calc_hours(float hours[], int weeks, char output);

int main(void)
{
    int weeks = get_int("Number of weeks taking CS50: ");
    float hours[weeks];

    for (int i = 0; i < weeks; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }

    char output;
    do
    {
        output = toupper(get_char("Enter T for total hours, A for average hours per week: "));

        if(output == 'T')
        {
            float Totalhours = 0.00;
            for (int i = 0; i < weeks; i++)
            {
                Totalhours += hours[i];
                }
            printf("The Total is %1f hours\n", Totalhours);
        }
    }
    while (output != 'T' && output != 'A');
}

// TODO: complete the calc_hours function
float calc_hours(float hours[], int weeks, char output)
{
    return hours[weeks] / weeks;
}