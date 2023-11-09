#include "main.h"
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separator between nums
 * @n: count of nums
 * @...: A variable nums to be printed.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list a;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(a, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(a);

	printf("\n");
}
