#include "main.h"
/**
 * _strdup - copy of the string given
 * @str: string to be coppied
 * Return: a || NULL
*/
char *_strdup(char *str)
{
	int x, i;

	for (x = 0; str[x]; x++)
	;
	char *a = malloc(x * sizeof(char));

	if (str == 0 || a == 0)
	return (NULL);
	for (i = 0; str[i]; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
