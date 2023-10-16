#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 *
 * @h: the head pointer of the linked list
 *
 * Return: the number of the nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t len;

	len = 0;
	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		len++;
	}
	return (len);
}
