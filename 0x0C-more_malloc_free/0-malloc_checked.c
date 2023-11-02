#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 * Return: a
 */
void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
