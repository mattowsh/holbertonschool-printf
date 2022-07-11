#include "main.h"

/**
 * print_b_rec - Prints a number converted to binary with
 * recursion. This function is called for print_b to return
 * the length of the integer
 * @n : integer
 */

void print_b_rec(long int n)
{
	if (n > 2)
	{
		print_b_rec(n / 2);
	}
	_printf("%c", (n % 2) + '0');
}

/**
 * print_b - Prints the length of the integer calling to print_b_rec
 * @args : list of arguments
 *
 * Return: lenght of the integer
 */

int print_b(va_list args)
{
	long int num = va_arg(args, long int);
	long int i = 1;

	if (num < 0)
	{
		num = -num;
		_putchar('-');
		i++;
	}

	printf("hola\n\n");
	print_b_rec(num);
	printf("hola");
	while (num >= 0)
	{
		num /= 2;
		i++;
	}

	return (i);
}
