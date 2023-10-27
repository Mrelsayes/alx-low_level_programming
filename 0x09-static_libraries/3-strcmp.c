#include "main.h"
/**
 * _strcmp - compares the two strings s1 and s2
 * @s1: string 1
 * @s2: string 2
 * Return: 0 || - || +
 * The strcmp() function compares the two strings s1 and s2.  The locale is not taken into account (for a locale-aware comparison, see strcoll(3)).  The
	   comparison is done using unsigned characters.

	   strcmp() returns an integer indicating the result of the comparison, as follows:

	   • 0, if the s1 and s2 are equal;

	   • a negative value if s1 is less than s2;

	   • a positive value if s1 is greater than s2.
*/
int _strcmp(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;

	for (; s1[len1] <= '\0'; len1++);
	for (; s2[len2] <= '\0'; len2++);
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