#include <cs50.h>
#include <stdio.h>

int main (void)
{
int scores[3];

    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    printf("Average score is %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3);

return 0;
}