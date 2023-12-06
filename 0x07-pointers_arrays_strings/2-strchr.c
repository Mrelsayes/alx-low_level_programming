#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: pointer
 * @c: char
 * Return: pointer to the first  character in string
 */
char *_strchr(char *s, char c)
{
	int s_len;

	for  (s_len = 0; s[s_len] != '\0'; s_len++)
	{
		if (s[s_len] == c)
		return (&s[s_len]);
	}
	return (NULL);
}
