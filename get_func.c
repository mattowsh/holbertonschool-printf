#include "main.h"

/**
 * get_func - Selects the correct function to execute
 * @args : list of arguments
 * @lett : letter, correspond to format[i + 1]
 *
 * Return: length of string/int printed
 */

int get_func(va_list args, char lett)
{
/* functions to execute according to format[i + 1] */
	toprint_t data[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_prc},
		{"d", print_di},
		{"i", print_di},
		{"b", print_b},
		{NULL, NULL}
	};

	int j = 0;

	while (data[j].letter && lett)
	{
		if (data[j].letter[0] == lett)
			return ((data[j].f)(args));
		j++;
	}

	if (lett != '\0')
	{
		_putchar('%');
		_putchar(lett);
		return (2); /* because we are returning 2 chars */
	}
	else /* when lett == NULL */
		return (_putchar('%'));

}
