#include "variadic_functions.h"

/**
 * p_str - Prints a string
 * @a: list of arguments
 */
void p_str(va_list a)
{
	char *str;

	str = va_arg(a, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * p_char - Prints a char
 * @a: list of arguments
 */
void p_char(va_list a)
{
	char letter;

	letter = va_arg(a, int);
	printf("%c", letter);
}

/**
 * p_int - Prints an int
 * @a: list of arguments
 */
void p_int(va_list a)
{
	int num;

	num = va_arg(a, int);
	printf("%d", num);
}

/**
 * p_float - Prints a float.
 * @a: list of arguments
 */
void p_float(va_list a)
{
	float num;

	num = va_arg(a, double);
	printf("%f", num);
}

/**
 * print_all - Prints anything, followed by a new line
 * @format: string of argument types
 * @...: variable number of arguments to be printed
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int index1 = 0, index2 = 0;
	char *separator = "";
	struc_print all_funs[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_str}
	};

	va_start(args, format);

	while (format && (*(format + index1)))
	{
		index2 = 0;

		while (index2 < 4 && (*(format + index1) != *(all_funs[index2].flag)))
			index2++;

		if (index2 < 4)
		{
			printf("%s", separator);
			all_funs[index2].print(args);
			separator = ", ";
		}

		index1++;
	}

	printf("\n");

	va_end(args);
}
