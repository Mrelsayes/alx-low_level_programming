#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: pointer to the byte in
 */
char *_strpbrk(char *s, char *accept)
{
	int s_len, accept_len;

	for (s_len = 0; s[s_len] != '\0'; s_len++)
	{
		for (accept_len = 0; accept[accept_len] != '\0'; accept_len++)
		{
			if (s[s_len] == accept[accept_len])
			return (&s[s_len]);
		}
	}
	return (NULL);
}
