#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

float calc_hours(int hours[], int weeks, char output);

int main(void)
{
    int weeks = get_int("Number of weeks taking CS50: ");
    int hours[weeks];

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
            int Totalhours = 0;
            for (int i = 0; i < weeks; i++)
            {
                Totalhours += hours[i];
                }
            printf("The Total is %i hours\n", Totalhours);
        } else if(output == 'A')
        {
            float calc_hours = hours[weeks] / weeks;
            printf("The Average numbers of hours is %f\n", calc_hours);
        }
          }
    while (output != 'T' && output != 'A');
}

// TODO: complete the calc_hours function
float calc_hours(int hours[i], int weeks, char output)
{
    calc_hours = return hours[i] / weeks;
}