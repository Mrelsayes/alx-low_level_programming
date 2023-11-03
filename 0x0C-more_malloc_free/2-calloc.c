#include "main.h"
/**
 * _calloc -  allocates memory for an array
 * @nmemb: num of bytes.
 * @size: size of bytes.
 * Return: 0 || NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int count, full_size = nmemb * size;
	void *a;
	char *flag;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(full_size);
	if (a == NULL)
		return (NULL);
	flag = a;
	for (count = 0; count < full_size; count++)
		flag[count] = 0;
	return (a);
}
