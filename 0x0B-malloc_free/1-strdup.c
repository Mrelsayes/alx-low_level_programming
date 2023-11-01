#include "main.h"
/**
 * _strdup - copy of the string given
 * @str: string to be coppied
 * Return: a || NULL
*/
char *_strdup(char *str)
{
	char *a;
	int x, i;

	if (str == 0)
	return (NULL);
	for (x = 0; str[x]; x++)
	;
	a = malloc((x + 1) * sizeof(char));
	if (a == NULL)
	return (NULL);
	for (i = 0; str[i]; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
