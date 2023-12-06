#include "main.h"
/**
 * more_numbers - prints the numbers 10 times
*/
void more_numbers(void)
{
	for (int y = 0; y <= 10; y++)
	{
		for (int x = 0; x <= 14; x++)
		{
			if (x >= 10)
			{
				_putchar('1');
			}
			_putchar('0' + x % 10);
		}
		_putchar('\n');
	}
}
