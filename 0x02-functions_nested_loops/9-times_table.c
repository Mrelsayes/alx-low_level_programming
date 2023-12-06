#include "main.h"
/**
 * times_table - prints the 9 times
 */
void times_table(void)
{
	int z, x, c;

	for (z = 0; z < 10; z++)
	{
		for (x = 0; x < 10; x++)
		{
			c = x * z;

			if (x == 0)
				_putchar(c + '0');

			if (c < 10 && x != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}

			else if (c >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
