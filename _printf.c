#include "main.h"

/**
 * _printf - Produces output according to printf C command
 *
 * Return: number of characters printed, excluding the final null byte
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j = 0;

/* functions to execute according to format[i + 1] */
	toprint_t data[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_%},
		{"d", print_di},
		{"i", print_di},
		{"u", print_u},
		{"o", print_o},
		{"x", print_xX},
		{"X", print_xX},
		{"p", print_p},
		{NULL, NULL}
	};

	va_start(args, format);

/* check format[i + 1] and select the corresponding function */
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == "%")
		{
			j = 0;
			while (data[j].letter)
			{
				if (data[j].letter[0] == format[i + 1])
					(data[j].f)(args);
				j++;
			}
			i++;
		}

		/* case: the most important special characters */
		if (format[i] == "\\")
			if (format[i + 1] == "n") /* newline */
				_putchar('\n');
			else if (format[i + 1] == "b") /* backspace */
				_putchar('\b');
			else if (format[i + 1] == "t")	/* tab */
				_putchar('\t');

		_putchar(format[i]);
	}

	va_end(args);
	return (......);
}

/* QUEDA VER
 * las mini funciones
 * checkear la logica de los loops y si funca ok
 * calculo final strlen de la string printeada
