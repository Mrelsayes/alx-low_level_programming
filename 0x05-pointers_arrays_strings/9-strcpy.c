#include "main.h"
/**
 * _strcpy - copies src to dest
 * @src: source
 * @dest: destination
 * Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int src_len;
	int x;

	for (src_len = 0; src[src_len] != '\0'; src_len++)
	;
	for (x = 0; x <= src_len; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}
