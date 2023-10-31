#include "main.h"
/**
 * str_concat - copy of 2 strings given
 * @s1: 1st string to be coppied
 * @s2: 2nd string to be coppied
 * Return: 1 || 0
*/
char *str_concat(char *s1, char *s2)
{
	int str_len, count, count2;

	for (str_len = 0; s1[str_len] || s2[str_len]; str_len++)
	;
	char *a = malloc(str_len * sizeof(char));
	
	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	if (a == 0)
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