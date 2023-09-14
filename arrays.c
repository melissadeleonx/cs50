#include <cs50.h>
#include <stdio.h>

int main (void)
{
int scores[3];

for(int i = 0; i < 3; i++)

{
    printf("Average score is %f\n", (scores[0] + scores[1] + scores[2]) / (float) 3);

    }
return 0;
}