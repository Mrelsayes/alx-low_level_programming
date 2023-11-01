#include "main.h"
/**
 * str_concat - copy of 2 strings given
 * @s1: 1st string to be coppied
 * @s2: 2nd string to be coppied
 * Return: a || NULL
*/
char *str_concat(char *s1, char *s2)
{
	char *a;
	int str_len1, str_len2, count, count2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (str_len1 = 0; s1[str_len1]; str_len1++)
	;
	for (str_len2 = 1; s2[str_len2]; str_len2++)
	;
	a = malloc((str_len1 + str_len2 + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (count = 0; s1[count]; count++)
	{
		if (s1[count] == 0)
		break;
		a[count] = s1[count];
	}
	for (count2 = 0; s2[count2]; count2++)
	{
		a[count++] = s2[count2];
	}
	return (a);
}
