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
/**
 * print_di - prints a number
 * @args : list of args
 * Return : length of a number
 */
int print_di(va_list args)
{
	int i ;
	int value;
i = 0;
value = va_arg(args, int)
	if (value < 0)
{ _putchar('-');
	i = 1;
}
	for (i ; value[i]; i++)
		_putchar(value[i] + '\0')
		
 return (i);
 }
/**
 * print_prc - prints perc sign
 * @args : list of args
 * Return : 1
 */
int print_prc(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}
