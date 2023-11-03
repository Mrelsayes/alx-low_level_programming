#include "main.h"
/**
 * array_range - create an array contains all the values
 * @min: 1st value
 * @max: last value
 * Return: a || NULL
 */
int *array_range(int min, int max)
{
	int i, x = 0;
	int *a;

	if (min > max)
		return (NULL);
	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		a[x] = i;
		x++;
	}
	return (a);
}
