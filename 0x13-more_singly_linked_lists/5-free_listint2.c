#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: poiter to singly linked list
*/
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	if (head == NULL)
		return;
	while (ptr != NULL)
	{
		*head = ptr->next;
		free(ptr);
		ptr = *head;
	}
	ptr = NULL;
	*head = ptr;
}
