#include <stdio.h>

// Get the average of the scores - the numbers represent hi! in ASCII
// First version, we use 3 different variables with almost the same name
// Second version, we will use the type of data called ARRAY - 
int main (void)
{
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    printf("Average: %f\n", ((float)score1 + score2 + score3) / 3); // typecasting is the solution to get a float result of integers or we can also put a decimal .0 on the number 3(but not ideal). As long as one of the values is float, all will be treated as float
}