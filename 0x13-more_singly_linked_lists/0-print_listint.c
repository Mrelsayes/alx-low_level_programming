#include "lists.h"
/**
 * print_listint -  prints all the elements of list
 * @h: poiter to singly linked list
 * Return: count if elements
*/
size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
