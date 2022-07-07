#include "main.h"

/**
 * _printf - Produces output according to printf C command
 *
 * Return: number of characters printed, excluding the final null byte
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j = 0, l = 0, length = 0;

/* functions to execute according to format[i + 1] */
	toprint_t data[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_prc},
		/*{"d", print_di},
		{"i", print_di},
		{"u", print_u}, -isn't requerided to mandatory tasks-
		{"o", print_o},
		{"x", print_xX},
		{"X", print_xX},
		{"p", print_p},*/
		{NULL, NULL}
	};

	va_start(args, format);

/* check format[i + 1] and select the corresponding function */
	if (format == NULL)
		return (-1);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			j = 0;
			while (data[j].letter && format[i + 1])
			{
				if (data[j].letter[0] == format[i + 1])
				{
					length += (data[j].f)(args);
					l = 1;
				}
				j++;
			}
			if (l)
			{
				i++;
				l = 0;
			}
			else
				length += _putchar('%');
		}
		else
			length += _putchar(format[i]);

		i++;
	}

	va_end(args);

	return (length);
}
