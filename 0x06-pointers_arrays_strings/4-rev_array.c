#include "main.h"
/**
 * reverse_array -  reverses the content of an array of integers
 * @a: array of integers
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int ia[n];
	int rn, rn2;

	rn = n - 1;
	for (int i = 0; n - 1 >= i; i++)
	{
		ia[i] = a[rn--];
	}
	rn2 = n - 1;

	for (int i = 0; rn2 >= i; i++)
	{
		a[i] = ia[i];
	}
}
