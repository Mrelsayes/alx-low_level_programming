#include "main.h"

/**
 * binary_to_uint - Converts binary number to unsigned int
 * @b: pointer to string of 0 and 1s
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int d = 0;

	if (!b)
		return (0);

	for (index = 0; b[index]; index++)
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);
		d = (d * 2) + (b[index] - '0');
	}
	return (d);
}
