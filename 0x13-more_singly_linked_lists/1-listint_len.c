#include "lists.h"
/**
 * listint_len - returns the number of elements in linked list
 * @h: poiter to singly linked list
 * Return: count if elements
*/
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++, h = h->next)
	;
	return (count);
}
