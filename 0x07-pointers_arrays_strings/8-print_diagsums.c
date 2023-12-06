#include "main.h"
/**
 * print_diagsums - prints the sum of two diagonals of square matrix
 * @a: 2d array
 * @size: size of 2d sqare array
 */
void print_diagsums(int *a, int size)
{
	int count, sum1 = 0, sum2 = 0;

	for (count = 0; count < size; count++)
	{
		sum1 += *(a + (size * count + count));
		sum2 += *(a + (size * count + size - 1 - count));
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
