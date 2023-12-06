#include "main.h"
/**
 * _strncpy - copy n bytes of a string
 * @dest: destination
 * @src: source
 * @n: num of bytes
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int src_len = 0;

	for (; src_len < n && src[src_len] != '\0'; src_len++)
	{
		dest[src_len] = src[src_len];
	}
	for (int null = src_len; null < n; null++)
	{
		dest[null] = '\0';
	}
	return (dest);
}
