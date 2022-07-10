#include "main.h"

/**
 * _printf - Produces output according to printf C command
 * @format : string or integer to be printed
 * Return: number of characters printed, excluding the final null byte
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, length = 0;

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

			length += get_func(args, format[i + 1]);
			i++;
		}
		else
			length += _putchar(format[i]);

		i++;
	}

	va_end(args);

	return (length);
}
