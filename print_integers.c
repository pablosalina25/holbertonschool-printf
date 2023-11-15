#include "main.h"

/**
 * print_integers - a function that prints integers.
 * @i: the integer to print
 * Return: the number of chars printed
 */
int print_integers(int i)
{
	char buff[51];
	int ind = 49;
	int sign = 1;

	if (i < 0)
	{
		sign = -1;
	}

	buff[50] = '\0';

	while (i != 0)
	{
		buff[ind] = ((i % 10) * sign) + '0';
		i /= 10;
		ind--;
	}
	if (ind == 49)
	{
		_putc('0');
		return (1);
	}
	if (sign == -1)
	{
		buff[ind] = '-';
		ind--;
	}
	return (_puts(buff + ind + 1));

}
