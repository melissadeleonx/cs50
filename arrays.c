#include <cs50.h>
#include <stdio.h>

const int N = 3;
float average(int array[]);

int main (void)
{
int scores[N];

for(int i = 0; i < N; i++)

{
    scores[i] = get_int("Score: ");
    }

    printf("Average score is %f\n", average(scores));
}

float average(int array[])
{

}