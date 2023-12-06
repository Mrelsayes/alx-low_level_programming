#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer to int
 * @b: pointer to int
*/
void swap_int(int *a, int *b)
{
	int x = *a;
	int y = *b;

	*a = y;
	*b = x;
}

