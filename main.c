#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;

	len = _printf("%b\n", 99);
	_printf("Length: %d\n", len);
	len = _printf("%b\n", 6);
	_printf("Length: %d\n", len);
	len = _printf("%b\n", -20);
	_printf("Length: %d\n", len);
	len = _printf("%b\n", 1);
	_printf("Length: %d\n", len);
	len = _printf("%b\n", 0);
	_printf("Length: %d\n", len);
	return (0);
}
