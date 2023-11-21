#include "lists.h"
/**
 * sum_listint - returns the sum of all the data of linked list
 * @head: poiter to singly linked list
 * Return: sum 
*/
int sum_listint(listint_t *head)
{
	int sum_all = 0;

	while (head != NULL)
	{
		sum_all += head->n;
		head = head->next;
	}
	return (sum_all);
}
