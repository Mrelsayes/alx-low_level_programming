#include "main.h"
/**
 * array_range - create an array contains all the values
 * @min: 1st value
 * @max: last value
 * Return: a || NULL
 */
int *array_range(int min, int max)
{
	int *a, i, x;

	if (min > max)
		return (NULL);
	x = max - min + 1;
	a = malloc(sizeof(int) * x);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
		a[i] = min++;
	return (a);
}
