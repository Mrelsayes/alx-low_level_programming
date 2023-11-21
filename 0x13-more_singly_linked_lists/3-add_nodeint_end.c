#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: poiter to singly linked list
 * @n: new element's content
 * Return: new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *ptr;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	ptr = *head;
	for (; ptr->next != NULL; ptr = ptr->next)
	;
	ptr->next = new;

	return (new);
}
