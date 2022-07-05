#ifndef MAIN_H
#define MAIN_H

/**
 * struct toprint - Type of argument and function associated info
 * @letter : type of argument (format[i + 1])
 * @f : function associated
 */

typedef struct toprint
	{
		char *letter;
		int (*f)(va_list args);
	} toprint_t;

/* functions */
int _printf(const char *format, ...);
int _putchar(char);

#endif
