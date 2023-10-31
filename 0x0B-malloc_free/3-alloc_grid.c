#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: column of 2d array
 * @height: row of 2d array
 * Return: a || NULL
*/
int **alloc_grid(int width, int height)
{
	int **a;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		a[h] = malloc(sizeof(int) * width);
		if (a[h] == NULL)
		{
			for (; h >= 0; h--)
				free(a[h]);
			free(a);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			a[h][w] = 0;
	}
	return (a);
}
