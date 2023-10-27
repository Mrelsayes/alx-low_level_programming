#include "main.h"
/**
 * _memcpy - fills the first n bytes of the memory area by constant b
 * @src: source array
 * @dest: source array
 * @n: num of bytes of the memory areas
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
