#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get_string to as for a return value. What is string? sets of characters, letters
    // = is not an equal sign but an assign sign, it gives an assignment
    string answer = get_string("What is your name? ");

    printf("Hello %s\n", answer);

    // the string depends on how the programmer wants it to implement
    // \n is for the next line or create a new line - please note that compiler tools are not user-friendly, you need to work around it to avoid errors!!
    // what is the % for? it is syntax(format code) to identify the data types, an identifier
    // stdio.h and cs50.h libraries(extensions) have the functions, any functions, one need to include its library
    // the cs50.h library is automatically done through cloud for the cs50 students
    // in scratch, it is when flag is clicked, in c, it is int main
    // header files(programmers called) are the libraries(code that predecessors wrote), there are still difference between library and header file though
    // get_string is for Cs50 but there are equivalent functions from other libraries
    // text editor can change colors but it does not really affect the code, it is for the appearance and for focus and mistake, visually useful, to check if the (){}are aligned to each other
    // %i %s %d %.f
    // nicer to have design from top to bottom so it is easier to read
    // arguments(input) -> functions -> return value(output)
    // python and other languages are easier since they use the English language more
    // in C, there is no string data type but instead characters which will be discussed in detail later. a training wheel for noobs
    // we will talk about scanf later!! it is very easy to make mistakes with C as it is lower level language that can pretty much control your entire computer
    // linux command that I might use, cp(copy), cd(change directory), mkdir(make directory), ls(list), rm(remove), mv(move), rmdir(remove directory)
    


}