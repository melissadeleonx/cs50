#include <stdio.h>

// Compile with Clang instead of the automated make command
// First version of the code, we include cs50.h and learn about clang -o helloclang helloclang.c -lcs50
// Second version, let us only use the stdio.h library which is a very very standard library with lots of prototype functions like printf (only use clang -o helloclang helloclang.c)
int main(void)
{
    // if you use clang, the terminal will have errors with get_string as undefined, why?
    // because there is another way for the computer to find already compiled 0 and 1 by the authors of a specific library like CS50
    // so we need to manually tell clang not only we want to o(output) a file and compile(.c), we also want to link in library with bunch of 1 and 0
    // clang -o helloclang helloclang.c -lcs50
    // Basically, we need to indicate all libraries(math, string, etc.) that we want to add to compile the files on the termina
    // I also tried to so the make command on VSCode Desktop and it is quite a long process to make 'make' command word (see the cs50 documentation for tips)

    printf("Hello World!\n");
}