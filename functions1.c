#include "main.h"

/**
 * print_c - Prints a char
 * @args : list of arguments
 *
 * Return: length of the string
 */

int print_c(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1); /* because we prints ONLY a char */
}

/** print_s - Prints a string
 * @args : list of arguments
 *
 * Return: length of the string
 */

int print_s(va_list args)
{
	char *str = va_arg(args, char *);

	while (str)
	{
		_putchar(str[i]);
		i++;
	}

	return (i); 
}
