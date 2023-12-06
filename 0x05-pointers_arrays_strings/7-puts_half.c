#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
*/
void puts_half(char *str)
{
	int len = 0;
	int half;

	for (; str[len] != '\0'; len++)
	;
	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len - 1) / 2;

	for (; str[half] != '\0'; half++)
		_putchar(str[half]);

	_putchar('\n');
}
