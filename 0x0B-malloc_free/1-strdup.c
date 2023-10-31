#include "main.h"
/**
 * _strdup - copy of the string given
 * @str: string to be coppied
 * Return: a || NULL
*/
char *_strdup(char *str)
{
	char *a;
	int x, i = 0;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		i++;

	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		a[x] = str[x];

	a[i] = '\0';

	return (a);
}
