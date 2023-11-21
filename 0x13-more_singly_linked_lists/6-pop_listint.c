#include "lists.h"
/**
 * pop_listint - deletes the head node of linked list
 * @head: poiter to singly linked list
 * Return: (n) the head node’s data
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (n);
}
