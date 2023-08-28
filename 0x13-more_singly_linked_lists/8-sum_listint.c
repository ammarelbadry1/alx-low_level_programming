#include "lists.h"

/**
 * sum_listint - add all the data (n) of a listint_t linked list
 *
 * @head: Head pointer to the linked list
 *
 * Return: the sum of all data
*/

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *current;

	if (head == NULL)
		return (0);
	current = head;
	sum = 0;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
