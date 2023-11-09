#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: separator between nums
 * @n: count of nums
 * @...: variable strings to be printed.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a;
	char *str;

	va_start(a, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(a, char *);

		if (str == NULL)
			printf("(nil)");
		else
		printf("%s", str);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(a);
	printf("\n");
}
