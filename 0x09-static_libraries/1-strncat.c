#include "main.h"
/**
 * _strncat - concatenates two strings
 * @scr: source
 * @dest: destination
 * @n: num of bytes from src
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;
	int count = 0;

	for (; dest[dest_len] != '\0'; dest_len++);
	for (; src[src_len] != '\0'; src_len++);
	if (n > src_len)
	{
		n = src_len;
	}
	for (; count < n ; count++)
	{
		dest[dest_len + count] = src[count];
	}
	dest[dest_len + count] = '\0';
	return (dest);
}
