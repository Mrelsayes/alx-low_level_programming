#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n : number of \\ to be printed
*/
void print_diagonal(int n)
{
	for (int line = 0; line < n && n > 0; line++)
	{
		for (int space = 0; space < line; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
		_putchar('\n');
}
