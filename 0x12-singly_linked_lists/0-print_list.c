#include "lists.h"
/**
 * print_list - prints all the elements of a list_t
 * @h: struct list_t
 * Return: count of nodes
 */
size_t print_list(const list_t *h)
{
	int count;
	char *string;

	for (count = 0; h; count++, h = h->next)
	{
		string = h->str;
		if (string)
			printf("[%i] %s\n", h->len, string);
		else
			printf("[0] %p\n", string);
	}
	return (count);
}
