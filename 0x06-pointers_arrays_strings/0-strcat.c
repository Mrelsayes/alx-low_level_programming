#include "main.h"
/**
 * _strcat - appends the src string to the dest string
 * @src: source
 * @dest: destination
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int dest_len;
	int src_len;
	int dest_count;
	int src_count = 0;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	;
	for (src_len = 0; src[src_len] != '\0'; src_len++)
	;
	for (dest_count = dest_len; dest_count <= dest_len + src_len; dest_count++)
	{
		dest[dest_count] = src[src_count];
		src_count++;
	}
	dest[dest_count] = '\0';
	return (dest);
}
