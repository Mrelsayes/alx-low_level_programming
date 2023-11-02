#include "main.h"
/**
 * _calloc -  allocates memory for an array
 * @nmemb: num of bytes.
 * @size: size of bytes.
 * Return: 0 || NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	char *flag;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);
	flag = a;
	for (index = 0; index < (size * nmemb); index++)
		flag[index] = '\0';
	return (a);
}
