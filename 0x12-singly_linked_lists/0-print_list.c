#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: list_t list.
 * Return: number of node_count
*/
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	for (; h; h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		node_count++;
	}

	return (node_count);
}
