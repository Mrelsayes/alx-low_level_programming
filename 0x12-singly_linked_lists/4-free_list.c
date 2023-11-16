#include "lists.h"
/**
 * free_list - frees a list_t
 * @head: A pointer to the beginning of list_t
 */
void free_list(list_t *head)
{
	list_t *tmp;

	for (; head; head = tmp)
	{
		tmp = head->next;
		free(head->str);
		free(head);
	}
}
