#include "lists.h"
/**
 * insert_nodeint_at_index - inserting a new node in certain postion
 * @head: poiter to singly linked list
 * @idx: index of node
 * @n: new node's data
 * Return: the address of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *ptr, *new_node;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		ptr = *head;
		for (x = 0; x < idx - 1 && ptr != NULL; x++)
			ptr = ptr->next;

		if (ptr == NULL)
			return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	new_node->next = ptr->next;
	ptr->next = new_node;

	return (new_node);
}
