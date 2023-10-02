#include <stdio.h>
#include <cs50.h>

// Goal is to learn more about the data type char = ' '; Each letters, numbers and symbols are characters
// With char, letters can be converted to numbers and from decimal numbers to binary numbers, the machine code of the computer
// First version is direct to the point with char C1C2C3, good to note that string are actually arrays of char, for example, the word HI! has [3] arrays
// Second version, using ASCII, we will convert letters to numbers but still printing the char[count of string]
// Good to note that for char letters, we put ' ' and with numbers there is no need. For char numbers, the representation is %i too.
// C knows ASCII and Unicode so it recognizes the conversion
// Third version is now using string HI! Do not forget the library that support string which is CS50.h
// String is an array of characters as proven by the first and second versions
// Fourth version is proving the definition of string with arrays string[0][1][2]. . .
// Now we are too technical, lol, \0 or NUL(ASCII) is being introduced, it determine when a string is to end or start. 8 0 bits means nul(\0). It is an invisible placeholder.
int main(void)
{
    string s = "HI!";
    printf("%i %i %i\n", s[0], s[1], s[2]);
}

