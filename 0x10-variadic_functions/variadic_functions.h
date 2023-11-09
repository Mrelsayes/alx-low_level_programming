#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct print - A new struct type defining a printer.
 * @flag: data type.
 * @print: function to function that prints
 */
typedef struct print
{
	char *flag;
	void (*print)(va_list arg);

} struc_print;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void p_char(va_list a);
void p_int(va_list a);
void p_float(va_list a);
void p_str(va_list a);

#endif
