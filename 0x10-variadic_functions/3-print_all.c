#include "main.h"

void p_char(va_list a);
void p_int(va_list a);
void p_float(va_list a);
void p_str(va_list a);
void print_all(const char * const format, ...);

/**
 * print_string - Prints a string.
 * @a: A list of arguments pointing to
 *       the string to be printed.
 */
void p_str(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_char - Prints a char.
 * @a: A list of arguments pointing to
 *       the character to be printed.
 */
void p_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - Prints an int.
 * @a: A list of arguments pointing to
 *       the integer to be printed.
 */
void p_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - Prints a float.
 * @a: A list of arguments pointing to
 *       the float to be printed.
 */
void p_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.

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

		while (index2 < 4 && (*(format + index1) != *(all_funs[index2].symbol)))
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

