#include "main.h"

/**
 * get_func - Selects the correct function to execute
 * @f : function to select
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
		/*{"u", print_u}, -isn't requerided to mandatory tasks-
		{"o", print_o},
		{"x", print_xX},
		{"X", print_xX},
		{"p", print_p},*/
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
