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
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (data[j].letter)
			{
				if (data[j].letter[0] == format[i + 1])
				{
					l = 0;
					length += (data[j].f)(args);
					l++;
				}
				else if (data[j].letter[0] != format[i + 1])
					_putchar('%');
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			length++;
		}

		if (l>0) 
			i += 2;
		else
			i++;
	}

	va_end(args);

	return (length);
}
