#include "main.h"
/**
 * get_bit - value of bit at given index
 * @n: decimal
 * @index: index
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	b = (n >> index);
	if (index > 32)
	{
		return (-1);
	}

	return (b & 1);
}
