#include <stdio.h>

int main (void)
{
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    printf("Average: %f\n", ((float)score1 + score2 + score3) / 3); // typecasting is the solution to get a float result of integers or we can also put a decimal .0 on the number 3. As long as one of the values is float, all will be treated as float
}