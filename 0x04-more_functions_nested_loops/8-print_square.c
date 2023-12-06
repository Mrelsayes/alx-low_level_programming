#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: number of squares to be printed
*/
void print_square(int size)
{
	for (int row = 0; row < size && size > 0; row++)
	{
		for (int column = 0; column < size && size > 0; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size == 0)
		_putchar('\n');

}
