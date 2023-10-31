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
	int str_len, count = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (str_len = 0; s1[str_len] || s2[str_len]; str_len++)
		len++;

	a = malloc(sizeof(char) * len);

	if (a == NULL)
		return (NULL);

	for (str_len = 0; s1[str_len]; str_len++)
		a[count++] = s1[str_len];

	for (str_len = 0; s2[str_len]; str_len++)
		a[count++] = s2[str_len];

	return (a);
}
