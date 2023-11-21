#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: poiter to singly linked list
 * @index: index of node
 * Return: 1 || -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *ptr, *next_node;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
		return (1);
	}

	ptr = *head;
	for (x = 0; x < index - 1; x++)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
	}

	next_node = ptr->next;
	ptr->next = next_node->next;
	free(next_node);
	return (1);

}
