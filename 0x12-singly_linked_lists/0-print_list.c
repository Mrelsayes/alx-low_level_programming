#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: list_t
 * Return: count of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	for (; h; h = h->next)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		count++;
	}
	return (count);
}
