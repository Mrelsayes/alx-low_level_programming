#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: numpers of _ in the line
*/
void print_line(int n)
{
	for (int x = 0; x <= n; x++)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
