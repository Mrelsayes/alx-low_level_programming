#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: is the size of the triangle
*/
void print_triangle(int size)
{
	for (int row = 0; row < size; row++)
	{
		for (int space = size - row; space > 1; space--)
		{
			_putchar(' ');
		}
		for (int x = 0; x <= row; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	_putchar('\n');
}
