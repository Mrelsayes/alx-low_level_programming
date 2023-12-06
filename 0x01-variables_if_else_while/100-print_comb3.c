#include <stdio.h>
/**
 * main - main block
 */
void main(void)
{
	for (char i = 48; i <= 57; i++)
	{
		for (char x = 48; x <= 57; x++)
		{
			putchar(i);
			putchar(x);
			if (x != 57)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
}
