#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: array
 * @accept: array
 * Return: num of bytes in the initial segment of s 
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int accept_len, s_len, x, match, count =0;
	
	for (accept_len = 0; accept[accept_len] != '\0'; accept_len++);
	for (s_len = 0; s[s_len] != '\0'; s_len++)
	{
		match = 0;
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (accept[x] == s[s_len])
				match = 1;
			if (match == 1 && x == accept_len - 1)
				count++;
			else if (match == 0 && x == accept_len - 1)
				return (count);
		}
	}
}
