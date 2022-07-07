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

/** 
 * print_s - Prints a string
 * @args : list of arguments
 *
 * Return: length of the string
 */

int print_s(va_list args)
{
	int i = 0;
	char *str = va_arg(args, char *);

	if (!str)
		str = "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (i); 
}

/**
 * print_prc - Prints percentage sign
 * @args : list of args
 * 
 * Return : length of the string
 */

int print_prc(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1); 
}

/**
 * print_di - Prints a number
 * @args : list of arguments
 *
 * Return: length of the number
 */

int print_di(va_list args)
{
	int value = va_arg(args, int);
	int module = value % 10;

/* PENDING */	
}	
