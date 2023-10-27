#include "main.h"
/**
 * _puts - prints a string, followed by a new line
 * @str: string
*/
void _puts(char *str)
{
	for (int i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
