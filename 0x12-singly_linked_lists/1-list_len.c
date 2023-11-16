#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: The linked list_t list.
 * Return: The number of element_count in h
 */
size_t list_len(const list_t *h)
{
	size_t element_count = 0;

	for (; h; h = h->next)
	{
		element_count++;
	}
	return (element_count);
}
