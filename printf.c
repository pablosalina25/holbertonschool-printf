#include "main.h"
/**
 * _printf - a function that produces output according to a format.
 * @format: the format string
 *
 * Return: the actual ammount of characters printed
 */
int _printf(char *format, ...)
{
	va_list list;
	int length = 0, tmp;
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
			tmp = getSpecifier(*ptr, &list);
			if (tmp == -1)
				length = -1;
			else
				length += tmp;
		}
		else
		{
			_putc(*ptr);
			length++;
		}
		if (*ptr != '\0')
			ptr++;
	}
	va_end(list);
	return (length);
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
 * Return: characters printed
 */
int getSpecifier(char c, va_list *list)
{
	switch (c)
	{
		case 'd':
		case 'i':
			return (print_integers(va_arg(*list, int)));

		case 'c':
			_putc(va_arg(*list, int));
			return (1);

		case 's':
			return (_puts(va_arg(*list, char *)));
		case 'r':
			return (print_reverse(va_arg(*list, char *)));
		case '%':
			_putc('%');
			return (1);

		case '\0':
			return (-1);
		case 'b':
			return (_print_binary(va_arg(*list, int)));

		default:
			_putc('%');
			_putc(c);
			return (2);
	}
}
