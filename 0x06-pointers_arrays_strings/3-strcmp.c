#include "main.h"
/**
 * _strcmp - compares the two strings s1 and s2
 * @s1: string 1
 * @s2: string 2
 * Return: 0 || - || +
*/
int _strcmp(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;

	for (; s1[len1] <= '\0'; len1++)
	;
	for (; s2[len2] <= '\0'; len2++)
	;
	if (s1[len1] == s2[len2])
	{
		return (0);
	}
	else if (s1[len1] - s2[len2] < 0)
	{
		return (s1[len1] - s2[len2]);
	}
	else if (s1[len1] - s2[len2] > 0)
	{
		return (s1[len1] - s2[len2]);
	}
}
