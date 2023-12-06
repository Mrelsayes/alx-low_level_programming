#include <stdio.h>
/**
 * main - main block
 */
void main(void)
{
	for (char i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
