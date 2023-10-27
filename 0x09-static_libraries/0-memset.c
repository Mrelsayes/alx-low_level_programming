#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area by constant b
 * @s: array
 * @b: constant byte
 * @n: num of bytes of the memory areas
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	for (int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
