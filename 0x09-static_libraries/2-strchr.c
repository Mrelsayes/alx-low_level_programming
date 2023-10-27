#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: string
 * @accept: character
 * Returns a pointer to the first occurrence of
 *  the character c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int s_len;
	for  (s_len = 0; s[s_len] != '\0'; s_len++)
	{
		if (s[s_len] == c)
		return (&s[s_len]);
	}
	return (0);
}
