#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t
 * @head: pointer to the beginning of the list_t
 * @str: string to be added to the list_t
 * Return: address of the new element || NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *temp;
	int len;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	temp = strdup(str);
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len]; len++)
	;
	new_node->str = temp;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
