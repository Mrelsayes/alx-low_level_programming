#include "function_pointers.h"
/**
 * int_index - earches for an integer
 * @array: array of ints
 * @size: size of array
 * @cmp: function pointer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}
	return (-1);
}
