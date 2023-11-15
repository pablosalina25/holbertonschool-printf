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
int _printf( char *format, ...);
int _puts(char *);
void _putc(char);
int getSpecifier(char c, va_list *list);
int getEscape(char c);

struct specifyer
{
	char c;	
};
#endif
