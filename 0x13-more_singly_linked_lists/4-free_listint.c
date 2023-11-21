#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: poiter to singly linked list
*/
void free_listint(listint_t *head)
{
	listint_t *flag;

	while (head != NULL)
	{
		flag = head->next;
		free(head);
		head = flag;
	}
}
