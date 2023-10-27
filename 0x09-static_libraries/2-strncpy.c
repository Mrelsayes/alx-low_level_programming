#include "main.h"
/**
 * _strncpy - copy n bytes of a string
 * @dest: destination
 * @src: source
 * @n: num of bytes
 * Return: dest
 * DESCRIPTION
 *The strcpy() function copies the string pointed to by src, including the terminating null byte ('\0'), to the buffer pointed to by dest.  The strings
 *may not overlap, and the destination string dest must be large enough to receive the copy.  Beware of buffer overruns!  (See BUGS.)
 *The strncpy() function is similar, except that at most n bytes of src are copied.  Warning: If there is no null byte among the first n bytes of  src,
 *the string placed in dest will not be null-terminated.
 *If the length of src is less than n, strncpy() writes additional null bytes to dest to ensure that a total of n bytes are written.
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
