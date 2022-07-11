#include "main.h"

/**
 * print_b - Prints the length of the integer calling to print_b_rec
 * @args : list of arguments
 *
 * Return: lenght of the integer
 */

int print_b(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int i = 0, length = 0, bufferB[100];

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	
	if	(num == 1)
	{
		_putchar('1');
		return (1);
	}

	/* to realize the conversion */
	for (i = 0; num > 0; i++)
	{
		bufferB[i] = num % 2;
		num /= 2;
	}

	/* to calculate the length of the int */
	for (i = i - 1; i <= 0; i--)
	{
		_putchar(bufferB[i] + '0');
		length++;
	}

	return (length);
}
