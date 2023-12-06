#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all numbers to 98,
 * @c: print from this number
 */
void print_to_98(int c)
{
	int z, x;

	if (c <= 98)
	{
		for (z = c; z <= 98; z++)
		{
			if (z != 98)
				printf("%d, ", z);
			else if (z == 98)
				printf("%d\n", z);
		}
	}
	else if (c >= 98)
	{
		for (x = c; x >= 98; x--)
		{
			if (x != 98)
				printf("%d, ", x);
			else if (x == 98)
				printf("%d\n", x);
		}
	}
}
