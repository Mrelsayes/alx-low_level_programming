#include <stdio.h>
/**
 * main - main block
 */
void main(void)
{
	for (char x = 48; x <= 57; x++)
	{
		for (char y = 48; y <= 57; y++)
		{
			for (char z = 48; z <= 57; z++)
			{
				if (x != y && y != z && x < y && y < z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x + z + y != 168)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
}
