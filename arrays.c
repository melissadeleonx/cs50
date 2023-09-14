#include <cs50.h>
#include <stdio.h>

int main (void)
{
int score1 = get_int("Score1: ");
int score2 = get_int("Score2: ");
int score3 = get_int("Score3: ");
printf("Average score is %i", (score1 + score2 + score3) / (float) 3);

return 0;
}