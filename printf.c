#include "main.h"
#include <stdio.h>
#include <unistd.h>
/** printf- : a function that produces output according to a format.
 * @format: the format string
 */
int _printf( char *format, ...)

{
	char *ptr = format;
	fflush(stdout);
		if (format != NULL)
		{
			return (-1);
		}

	while (*ptr)
	{
		if (*ptr == '/' )
		{
			ptr++;
		
			if (ptr != NULL)
				write (1 , ptr , 1);
		}	
		else if (*ptr == '%')
		{		
			ptr++;
			switch (*ptr)
			{
			case 'c':
				write (1 , ptr , 2);
		      	break;
			case 's':
			_puts("playsHolder");
			break;
			}
		}
		else
			write (1 , ptr ,2);

		ptr++;
	}
	return(0);
}
