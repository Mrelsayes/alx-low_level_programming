#include "main.h"
/**
 * string_nconcat - pointer to a newly allocated space in memory
 * @s1: 1st string
 * @s2: 2nd string
 * @n: The maximum num of bytes
 * Return: a || NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		len++;
	a = malloc(sizeof(char) * (len + 1));
	if (a == NULL)
		return (NULL);
	len = 0;
	for (i = 0; s1[i]; i++)
		a[len++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		a[len++] = s2[i];
	a[len] = '\0';
	return (a);
}
