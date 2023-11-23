#include "main.h"
/**
 * flip_bits - number of bits to get from one num to another
 * @n: parameter
 * @m: destiny
 * Return: flipped numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, b = 0;

	while (x > 0)
	{
		b += (x & 1);
		x >>= 1;
	}
	return (b);
}
