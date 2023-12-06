#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: array
 * @n: the number of elements of the array to be printed
*/
void print_array(int *a, int n)
{
	for (int x = 0; x <= n - 1; x++)
	{
		printf("%d", a[x]);

		if (x != n - 1)
			printf(", ");
	}
	printf("\n");
}
