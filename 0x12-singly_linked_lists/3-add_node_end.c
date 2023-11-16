#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: pointer the beginning of the list_t
 * @str: string to be added to the list_t
 * Return: address of the new element || NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *temp;
	int len;
	list_t *new_node, *tail;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	temp = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len]; len++)
	;

	new_node->str = temp;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		tail = *head;
		for (; tail->next != NULL; tail = tail->next)
		;
		tail->next = new_node;
	}

	return (*head);
}
