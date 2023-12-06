#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	for (; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		{
			x++;
		}
		putchar(x);
	}
		putchar('\n');

	return (0);
}
