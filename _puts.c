#include "main.h"
/**
 * _puts - A function that prints a string
 * @ptr: the string to be printed
 *
 * Return: then number of bytes printed
 */
int _puts(char *ptr)
{
	int r = 0;

	if (ptr == NULL)
	{
		return (0);
	}

	while (*ptr)
	{
		write(1, ptr, 1);
		ptr++;
		r++;
	}
	return (r);
}

/**
 * _putc - A function that prints a char
 * @c: the char
 */
void _putc(char c)
{
	write(1, &c, 1);
}
