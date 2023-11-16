# README.md C - printf Project

## Table of Contents

* [Description](#Description)
* [Functions](#Functions)
* [Example](#Example)

## Description of the project

This project is about creating a basic version of the printf function in C. The printf function is used to display information on the screen in different formats. In this case, we want to create a function called _printf that can format and display the output correctly based on the information provided, such as a text and some variable data.

# <a> <img src="https://i.ibb.co/LZphmqD/Flow-Chart-Printf.png" alt="Flow-Chart-Printf" border="0">

## Compilation:

Compilation to use `_printf()` function on C.
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
## Functions

* <b>_printf</b>: This function takes as arguments a format string, and an unspecified ammount of arguments to insert according to the format. If successfull, it returns the total number of characters printed. If there is a problem during execution, it returns -1.

* <b>_puts</b>: This functions takes a string and prints it to the terminal. If the string is a null pointer, it prints "(null)". I then returns the number of characters printed.

* <b>_putc</b>: This function takes a character and prints it to the terminal.

* <b>print_integers</b>: This function takes an integer and converts it to a character string, and then prints the string to the terminal

* <b>getEscape</b>: This functions takes a character and prints the corresponding alternative character.

* <b>getSpecifier</b>: This function takes a character and an argument list, advances the list, and prints the argument as the type specified by the character. It returns the number of characters printed.

* <b>_print_binary</b>: This function takes an unsigned integer, converts it to its binary representation, and prints it.

## Example

Here is an example of the usage of the _printf function

```
root@bd2f69d1ea08:/holbertonschool-printf# cat main.c
#include "main.h"
#include "printf.c"
#include "_puts.c"
#include "print_integers.c"
 /**
 * main - Examples of _printf function
 * Return: success
 */
int main(void)
{
       int len;

        len = _printf("This is a simple sentence\n");

        _printf("This is a character: %c\n", 64);
        _printf("This is an integer: %d\n", -65536);
        _printf("The length of the first sentence: %d\n", len);

        return (0);
}
root@bd2f69d1ea08:/holbertonschool-printf# ./main.out
This is a simple sentence
This is a character: @
This is an integer: -65536
The length of the first sentence: 26
root@bd2f69d1ea08:/holbertonschool-printf#
```
