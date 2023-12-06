#include "main.h"
/**
 * _memcpy - Copies n bytes from memory area pointed.
 * @src: source array
 * @dest: destination array
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
