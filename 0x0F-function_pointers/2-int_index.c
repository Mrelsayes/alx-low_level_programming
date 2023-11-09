#include "function_pointers.h"
/**
 * int_index - earches for an integer
 * @array: array of ints
 * @size: size of array
 * @cmp: function pointer
 * Return: i
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
