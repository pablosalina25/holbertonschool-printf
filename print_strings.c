#include "main.h"

/**
 * print_reverse - prints a string in reverse
 * @s: the string
 * Return: the numer of characters printed
 */
int print_reverse(char *s)
{
	int r = 0;
	int i = 0;

	if (s == NULL)
	{
		_puts("(null)");
		return (6);
	}
	while (s[i])
		i++;
	r = i;
	i--;
	while (i >= 0)
	{
		_putc(s[i]);
		i--;
	}
	return (r);
}
