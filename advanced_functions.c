#include "main.h"

/**
 * print_b - Converts a number in binary and print it
 * @args : list of arguments
 *
 * Return: lenght of the integer
 */

int print_b(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int bufferB[100];
	int i = 0, length = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	
	/* to realize the conversion */
	for (i = 0; num > 0; i++)
	{
		bufferB[i] = num % 2;
		num /= 2;
	}

	/* to calculate the length of the int */
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(bufferB[i] + '0');
		length++;
	}

	return (length);
}
