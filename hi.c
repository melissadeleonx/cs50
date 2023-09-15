#include <stdio.h>
#include <cs50.h>

int main(void)
{
   string words[2];

   words[0] = "HI!";
   words[1] = "BYE!";

   printf("%c%c%c\n%c%c%c%c", words[0], words[1]);
}