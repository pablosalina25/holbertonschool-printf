#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _printf - a function that produces output according to a format.
 * @format: the format string
 *
 * Return: the actual ammount of characters printed
 */
int _printf(char *format, ...)
{
	va_list list;
	int length = 0;
	char *ptr = format;


	va_start(list, format);

	fflush(stdout);

	if (format == NULL)
	{
		return (-1);
	}
	while (*ptr)
	{
		if (*ptr == '/')
		{
			ptr++;
			length += getEscape(*ptr);
		}
		else if (*ptr == '%')
		{
			ptr++;
			length += getSpecifier(*ptr, &list);
		}
		else
		{
			_putc(*ptr);
			length++;
		}

		ptr++;
	}
	return (0);
}


/**
 * getEscape - prints escape char
 * @c: the char to escape
 * Return: characters printed
 */
int getEscape(char c)
{
	switch (c)
	{
		case 'n':
			_putc('\n');
			return (1);
		default:
			_putc(c);
			return (1);
	}
}


/**
 * getSpecifier - handles specifiers
 * @c: the specifier
 * @list: the argument list
 */
int getSpecifier(char c, va_list *list)
{
	switch (c)
	{
		case 'c':
			_putc(va_arg(*list, int));
			return (1);
		case 's':
			return (_puts(va_arg(*list, char *)));
		case '%':
			_putc('%');
			return (1);
		default:
			_putc('%');
			_putc(c);
			return (2);
	}
}
