#include "main.h"

/**
 * print_b_rec - Prints a number converted to binary with
 * recursion. This function is called for print_b to return
 * the length of the integer
 * @n : integer
 */

void print_b_rec(unsigned int n)
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
	unsigned int num = va_arg(args, unsigned int);
	unsigned int i = 0;

	print_b_rec(num);
	while (num > 2)
	{
		num /= 2;
		i++;
	}
	
	return (i);
}
