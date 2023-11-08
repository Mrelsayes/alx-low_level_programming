#include "function_pointers.h"
/**
 * array_iterator - prints a name
 * @array: executes a functions as parameters on array
 * @size: size of array
 * @action: function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}

	}
}
