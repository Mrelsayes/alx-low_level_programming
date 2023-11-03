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
	unsigned int str_len1, str_len2, count1, count2;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (str_len1 = 0; s1[str_len1] != '\0'; str_len1++)
	;
	for (str_len2 = 0; s2[str_len2] != '\0'; str_len2++)
	;
	if (n > str_len2)
		n = str_len2;
	a = malloc(sizeof(char) * (str_len1 + n + 1));
	if (a == NULL)
		return (NULL);
	for (count1 = 0; count1 < str_len1; count1++)
	{
		a[count1] = s1[count1];
	}
	for (count2 = 0; count2 < n; count2++)
	{
		a[count1] = s2[count2];
		count1++;
	}
	return (a);
}
