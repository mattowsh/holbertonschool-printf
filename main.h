#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

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
int print_c(va_list args);
int print_s(va_list args);
int print_prc(va_list args);
int print_di(va_list args);
int get_func(va_list args, char lett);
void print_b_rec(unsigned int n);
int print_b(va_list args);

#endif
