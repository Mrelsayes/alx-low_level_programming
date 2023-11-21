#include "lists.h"
/**
 * get_nodeint_at_index - deletes the head node of linked list
 * @head: poiter to singly linked list
 * @index: index of node
 * Return: (n) the head node’s data
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
		return (NULL);
	for (x = 0; x < index; x++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
