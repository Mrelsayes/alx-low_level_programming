#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: 2d array
 */
void print_chessboard(char (*a)[8])
{
	for (int row = 0; a[row - 1][8]; row++)
	{
		for (int column = 0; column < 8; column++)
		{
			_putchar(a[row][column]);
		}
		_putchar(10);
	}
}
