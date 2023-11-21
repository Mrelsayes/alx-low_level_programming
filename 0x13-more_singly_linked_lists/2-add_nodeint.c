#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of list
 * @head: poiter to singly linked list
 * @n: new element's content
 * Return: new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
		return (NULL);

	new_head->n = n;
	new_head->next = *head;
	*head = new_head;

	return (new_head);
}
