#include <cs50.h>
#include <stdio.h>

float average(int array[]);

int main (void)
{
int scores[3];

for(int i = 0; i < 3; i++)

{
    scores[i] = get_int("Score: ");
    }

    printf("Average score is %f\n", average(scores));
}

float average(int array[])
{
    
}