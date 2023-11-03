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
	unsigned int str_len1 = 0, str_len2 = 0, count;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[str_len1] != '\0'; str_len1++)
	;
	for (; s2[str_len2] != '\0'; str_len2++)
	;
	if (n > str_len2)
	n = str_len2;
	a = malloc((str_len1 + n + 1) * sizeof(char));
	if (a == NULL)
		return (0);
	for (count = 0; count < str_len1; count++)
		a[count] = s1[count];

	for (; count < (str_len1 + n); count++)
		a[count] = s2[count - str_len1];
	a[count] = '\0';

return (a);
}
