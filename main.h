#ifndef _CUSTOM_PRINTF_
#define _CUSTOM_PRINTF_
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <fcntl.h>
#include <stdarg.h>
int _printf(char *format, ...);
int _puts(char *);
void _putc(char);
int print_integers(int);
int getSpecifier(char c, va_list *list);
int getEscape(char c);
int _print_binary(unsigned int);
int print_reverse(char *);
#endif
