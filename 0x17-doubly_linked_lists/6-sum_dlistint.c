#include "lists.h"

/**
 * sum_dlistint - get the sum of the data stored in a doubly linked list
 *
 * @head: points to the first node in the list
 *
 * Return: the sum of all the data (n) of a dlistint_t linked list
 * or 0 if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
